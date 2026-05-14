// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    int i = hash(word);
    node *ptr = table[i];
    while (ptr != NULL)
    {
      if (strcmp(ptr->word,word) == 0)
      {
       return true;
      }
     ptr = ptr->next;
    }
    // TODO
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    return toupper(word[0]) - 'A';
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // TODO
    FILE *diccion = fopen(dictionary, "r")

    char *Palabra = malloc(10 * sizeof(char));
    if (Palabra == NULL)
    {
        return false;
    }

    while(fscanf(diccion, "%s", Palabra) != NULL)
    {
        node *n = malloc(sizeof(node))
        if (n == NULL)
        {
            return false;
        }
        int i = hash(Palabra);
        strcpy(n->word, Palabra);
        n->next = NULL;
        if (table[i]->next == NULL)
        {
            table[i] = n;
        }
        else
        {
            n->next = table[i]->next;
            table[i] = n;
        }
    }
    fclose(diccion);
    return false;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    for (int i = 0; i == N; ++i)
    {
    int Size = strlen(table[i])
    return Size;
    if (table[i]->word == NULL)
    {
    return 0;
    }
    }
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    for (node *ptr = table; ptr == NULL; ptr = ptr->next)
    {
     free(ptr->next);
    }
    // TODO
    return false;
}
