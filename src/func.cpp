#include "func.h"
#include <string.h>

char* delete_spase(char string[]) {
    if (string == NULL) return string;
  int i = 0;

  char *start = string;
  while (isspace((unsigned char)*start)) {
      start++;
  }

  char *end = start + strlen(start) - 1;
  while (end > start && isspace((unsigned char)*end)) {
      end--;
  }

  size_t len = (end >= start) ? (end - start + 1) : 0;
  memmove(string, start, len);
  string[len] = '\0';
  

  return string;
}


