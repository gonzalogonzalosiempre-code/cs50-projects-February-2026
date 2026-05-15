#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

// result string must be a heap-allocated, nul-terminated string
// to be freed by the tests suite

char *likes(size_t n, const char *const names[n]);

int main (int argc, char *argv[])
{
   if (argc < 1)
  {
    printf("No one like this");
    return 0;
  }
  int Count_Names = argc - 1;
  char *names[Count_Names];
  int Count = 1;
  for (int i = 0; i <= Count_Names; ++i)
  {
    names[i] = argv[Count];
    Count++;
  }
  char *string = likes(Count_Names, (const char *const *)names);

  printf("%s", string);

}

char *likes(size_t n, const char *const names[n]) {
    //  <----  hajime!
  if (n == 1)
  {
    char *string = malloc(20 * sizeof(char));
    if (string == NULL)
    {
      return 0;
    }
    sprintf(string, "%s likes this", names[0]);
    return string;
  }
  else if (n == 2)
  {
   char *string = malloc(30 * sizeof(char));
    if (string == NULL)
    {
      return 0;
    }
   sprintf(string, "%s, and %s, like this", names[0], names[1]);
   return string;
  }
  else if (n == 3)
  {
    char *string = malloc(30 * sizeof(char));
    if (string == NULL)
    {
      return 0;
    }
    int Number = n - 2;
    sprintf(string, "%s, %s and %i others like this", names[0],names[1],Number);
    return string;
  }
  return string;
}
