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
  node *list = malloc(sizeof(node));
    if (list == NULL)
    {
        return 1;
    }
  list = NULL;

  for (int i = 0; i < 3 ; ++i)
  {
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        unload(list);
        return 1;
    }
    n->Number = i;
    n->next = NULL;
    
    n->next = list;
    list = n;
  }
  for (node *ptr = list; ptr != NULL; ptr = ptr->next)
  {
    printf("%i", ptr->Number);
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
