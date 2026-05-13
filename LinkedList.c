#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int Number;
    struct node *next;
} node;

void unload(node *);

int main (void)
{
  node *list = NULL;

  for (int i = 0; i < 8 ; ++i)
  {
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        unload(list);
        return 1;
    }
    int Numero;
    printf("Ingre su Numero: ");
    scanf("%i", &Numero);
    n->Number = Numero;
    n->next = NULL;

    n->next = list;
    list = n;
    if (n)
  }
  for (node *ptr = list; ptr != NULL; ptr = ptr->next)
  {
    printf("%i\n", ptr->Number);
  }
  unload(list);
  return 0;
}

void unload(node *Lista)
{
     node *ptr = Lista;
    while (Lista != NULL)
    {
        node *next = ptr->next;
        free(next);
        ptr = next;
    }
}
