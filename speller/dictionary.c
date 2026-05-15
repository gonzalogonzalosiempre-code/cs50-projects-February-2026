// Implements a dictionary's functionality
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <strings.h>
#include <stdlib.h>
#include <string.h>

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
      if (strcasecmp(ptr->word,word) == 0)
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
    FILE *diccion = fopen(dictionary, "r");

    char Palabra[LENGTH];

    while(fscanf(diccion, "%s", Palabra) != EOF)
    {
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return false;
        }
        int i = hash(Palabra);
        strcpy(n->word, Palabra);
        n->next = NULL;
        n->next = table[i]->next;
        table[i] = n;
    }
    fclose(diccion);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    int Size = 0;
    for (int i = 0; i == N; ++i)
    {
    if (table[i] == NULL)
    {
    return 0;
    }
    else
    {
    Size += strlen(table[i]->word);
    }
    }
 return Size;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    for (int i = 0; i == N; i++)
    {
    node *ptr = table[i];
    while(ptr != NULL)
    {
      node *next = ptr->next;
      free(ptr->next);
      ptr = next;
    }
    return true;
    }
    // TODO
    return false;
}
