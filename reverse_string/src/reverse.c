void reverse_string(char *str) {
  int len = 0;

  while (str[len] != '\0') {
    len++;
  }

  for (int lower = 0, upper = len - 1; lower < len / 2; lower++, upper--) {
    char temp = str[lower];
    str[lower] = str[upper];
    str[upper] = temp;
  }
}