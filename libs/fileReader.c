#include "fileReader.h"

FILE* readFile(char *route)
{
  FILE *file = fopen(route, "r");

  if (file == NULL)
  {
    printf("\n\tno se pudo leer el archivo...\n");

    return NULL;
  }

  return file;
}