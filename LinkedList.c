#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int Number;
    node *next;
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

    if (list == NULL)
    {
     list = n;
    }
    else
    {
    n->next = list;
    list = n;
    }
  }
  for (node *ptr = list; list != NULL; ptr = ptr->next)
  {
    printf("%i", Number);
  }
  unload(list);
  return 0;
}

void unload(node *)
{
     node *ptr = list;
    while (list != NULL)
    {
        node *next = ptr->next;
        free(next);
        ptr = next;
    }
}
