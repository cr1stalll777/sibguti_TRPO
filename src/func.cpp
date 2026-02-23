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


char* delete_all_spase(char string[]) {
    if(string == nullptr) {
        return string;
    }
    int write = 0;
    
    for (int read = 0; string[read] != '\0'; read++) {
        if (string[read] != ' ') {
            string[write++] = string[read];
        }
    }
    string[write] = '\0'; // Ставим новый конец строки
    
    return string;
}

char* reverse_string(char string[]) {

    int length = 0;
    while (string[length]) {
        length++;
    }

    int mid = length / 2;

    for (size_t i = 0; i < mid; i++) {
        char temp = string[i];
        string[i] = string[length - 1 - i];
        string[length - 1 - i] = temp;
    }
    
    return string;
}

char* capitalize(char word[]) {
    if (word) {
        if (word[0] >= 97 && word[0] <= 122) {
            word[0] = word[0] - 32;
        }
    }

    return word;
}

char* abbreviate(char word[]) {
    int len = 0;
    while(word[len]) len++;

    if (len > 10) {
        char buff[len];
        sprintf(buff, "%c%d%c", word[0], len - 2, word[len - 1]);
        strcpy(word, buff);
    }

    return word;
}

int calculate_shipping(int count) {
    if (count <= 0) return 0;

    return 780 + (count - 1) * 210;
}