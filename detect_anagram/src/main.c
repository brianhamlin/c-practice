#include <stdio.h>

#include "anagram.h"
#include "line_reader.h"

#define MAXLINE 1024

int main(void) {

  char buffer[MAXLINE];
  int is_anagram_bool;

  while (get_line(buffer, MAXLINE) > 0) {
    is_anagram_bool = is_anagram(buffer);
    if (is_anagram_bool == 1) {
      printf("'%s' is an anagram\n", buffer);
    } else {
      printf("'%s' is not an anagram\n", buffer);
    }
  }

  return 0;
}