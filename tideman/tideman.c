#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// preferences[i][j] is number of voters who prefer i over j
int preferences[MAX][MAX];

// locked[i][j] means i is locked in over j
bool locked[MAX][MAX];

// Each pair has a winner, loser
typedef struct
{
    int winner;
    int loser;
} pair;

// Array of candidates
string candidates[MAX];
pair pairs[MAX * (MAX - 1) / 2];

int pair_count;
int candidate_count;

// Function prototypes
bool vote(int rank, string name, int ranks[]);
void record_preferences(int ranks[]);
void add_pairs(void);
void sort_pairs(void);
void lock_pairs(void);
void print_winner(void);
bool Ciclo_Hallar(int loser, int winner);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: tideman [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i] = argv[i + 1];
    }

    // Clear graph of locked in pairs
    for (int i = 0; i < candidate_count; i++)
    {
        for (int j = 0; j < candidate_count; j++)
        {
            locked[i][j] = false;
        }
    }

    pair_count = 0;
    int voter_count = get_int("Number of voters: ");

    // Query for votes
    for (int i = 0; i < voter_count; i++)
    {
        // ranks[i] is voter's ith preference
        int ranks[candidate_count];

        // Query for each rank
        for (int j = 0; j < candidate_count; j++)
        {
            string name = get_string("Rank %i: ", j + 1);

            if (!vote(j, name, ranks))
            {
                printf("Invalid vote.\n");
                return 3;
            }
        }

        record_preferences(ranks);

        printf("\n");
    }

    add_pairs();
    sort_pairs();
    lock_pairs();
    print_winner();
    return 0;
}

// Update ranks given a new vote
bool vote(int rank, string name, int ranks[])
{
    //Empezamos contando desde el primer candidato comparando si el nombre obtenido coincide con alguno
    for (int j = 0; j < candidate_count; ++j)
    {
    if (strcmp(name, candidates[j]) == 0) // Si coincide se registra en ranks, mediante la variable rank para presicion
    {
        ranks[rank] = j;
        return true;
    }
    }
    // TODO
    return false;
}

// Update preferences given one voter's ranks
void record_preferences(int ranks[])
{
    //Contamos desde el primer candidato
    for (int i = 0; i < candidate_count; ++i)
    {
        for (int j = i + 1; j < candidate_count; ++j) //Contamos desde el candidato 1 es decir i + 1
        {
         preferences[ranks[i]][ranks[j]]++; // Quien prefirio mas a i que a j, el for verifica cada candidato empezando desde 1 comparandolo con i
        }
    }
    // TODO
    return;
}

// Record pairs of candidates where one is preferred over the other
void add_pairs(void)
{
    //Contamos desde el primer candidato para tener su preferencia, contra la preferencia de otros cantidadatos sobre otros candidatos y contar pares con ganadores y perdedores
    for (int i = 0; i < candidate_count; ++i)
    {
      for (int j = 0; j < candidate_count; ++j)
      {
        if (preferences[i][j] > preferences[j][i]) //Si la preferencia de i sobre j es mayor a la preferencia de j sobre i entonces i es el ganador en el par y j es el perdedor en el par y se registra en pairs de la estructura pair
        {
         pairs[pair_count].winner = i;
         pairs[pair_count].loser = j;
         pair_count++; //Recuento de numero de pares se va sumando cada que se registra un par
        }
      }
    }
    // TODO
    return;
}

// Sort pairs in decreasing order by strength of victory
void sort_pairs(void)
{
    //empezamos contando desde 0 hasta el numero de pares que obtuvimos, para poder contar que pares tuvieron mayor prefenrecia sobre otros pares o cual tiene mas fuerza, usando el algoritmo Bubble Sort
    for (int i = 0; i < pair_count; ++i)
    {
      for (int j = 0; j < pair_count - 1 - i; ++j)// Aca usamos pair_count - 1, ya que ya tanto como es asi en el algoritmo bubble sort para su funcionamiento, usamos - i porque ya estamos revisando el primer pair count con i asi evitando errores
      {
        int PrimerDuelo = preferences[pairs[i].winner][pairs[i].loser];     //Como Dice el algoritmo Bubble Sort, Para saber los datos del primer Duelo o el primer par, y el proximo, para mayor optimizacion lo reunimos en una variable temporal
        int ProximoDuelo = preferences[pairs[j+1].winner][pairs[j+1].loser];
        if (ProximoDuelo > PrimerDuelo) //Bubble Sort plantea que compara el primero con el proximo y intercambia, para ordernar de manera decreciente, comparamos si el proximo duelo es mas fuerte que el primer duelo y ordenamos.
        {
          pair temp = pairs[j];
          pairs[i] = pairs[j + 1];
          pairs[j + 1] = pairs[i];
        }
      }
    }
    // TODO
    return;
}
bool Ciclo_Hallar(int loser,int winner)
{
    //Creamos una funcion recursiva, para poder usarla en lock pairs, ya que no tiene los parametros para crear una funcion recursiva dentro de ella.
 if (loser == winner) // Caso base, Si el perdedor llega a el ganador es decir son iguales, se detiene porque va a volvera llamar a la funcion creando un ciclo y pudiendo agotar la Pila de cualquier forma se encontro el ciclo y devuelve verdadero, ya que siempre encontrara un ciclo en alguno de los candidatos
 {
    return true;
 }
 for (int i = 0; i < candidate_count; ++i) // Contamos desde 0 hasta los candidatos
 {
   if(locked[loser][i]) //Si el perdero bloquea a el candidato i repite hasta encontrar un ciclo
   {
    if(Ciclo_Hallar(i, winner)) // Aca creamos un "clon" para poder usar denuevo la funcion para comprobar que si i tiene bloquea o apunta a alguien, hasta winner, osea hasta el candidato que le gana
    {
        return true;
    }
   }
 }
 return false; // No se encontro ningun ciclo para locked
}
// Lock pairs into the candidate graph in order, without creating cycles
void lock_pairs(void)
{
 for (int i = 0; i < candidate_count; ++i)//Usamos for, no se puede hacer una funcion recursiva dentro de esta funcion ya que no nos pide ningun valor.
 {
    if (!Ciclo_Hallar(pairs[i].loser,pairs[i].winner)) //Si el ciclo hallar es falso, para pairs i entonces bloquea con seguridad pairs i tanto como su ganador como perdedor
    {
        locked[pairs[i].winner][pairs[i].loser] = true;
    }
 }

}

// Print the winner of the election
void print_winner(void)
{
   bool LeGana = false; // Le gana es falso por el momento
  for (int i = 0; i < candidate_count; ++i)//Revisamos i
  {
    for (int j = 0; j < candidate_count; ++i)// Revisamos cada candidato para i con J
    {
    if (locked[j][i])// Algun perdedor le gana a i?
    {
     LeGana = true; //Le gana rompe el codigo no puede ser ganador
     break;
    }
    }
    if (!LeGana) // Nadie le gana es legitimo Ganador
  {
    printf("%s\n", candidates[i]); //Imprime el candidato i osea el ganador
    return;
  }
  }
}
//ESTUVE buscando como hacer esto me demore 3 horas y algo, no tuve tiempo porque venia de la escuela y tal pero dios que satisfaccion terminarlo, buen problema C:
