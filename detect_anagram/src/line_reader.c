#include <stdio.h>

int get_line(char buffer[], int max) {
  int i, c;

  for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
    buffer[i] = c;
  }
  buffer[i] = '\0';
  return i;
}