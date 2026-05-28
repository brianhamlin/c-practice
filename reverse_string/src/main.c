#include <stdio.h>

#include "line_reader.h"
#include "reverse.h"

#define MAXLINE 1024

/* reads a line from stdin, reverses it and prints the result */
int main(void) {

  char buffer[MAXLINE];

  while (get_line(buffer, MAXLINE) > 0) {
    reverse_string(buffer);
    printf("%s\n", buffer);
  }

  return 0;
}