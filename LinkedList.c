#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int Number;
    node *next;
} node;

int main (void)
{
  node *list = malloc(sizeof(node));
  {
    if (list == NULL)
    {
        return 1;
    }
  }

  for (int i = 0; i < 3 ; ++i)
  {
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->Number = i;
    n->next = NULL;
    list->next = n->next;
    list = n;


  }
}
