int is_anagram(char *str) {
  int len = 0;

  while (str[len] != '\0') {
    len++;
  }

  for (int lower = 0, upper = len - 1; lower < len / 2; lower++, upper--) {
    if (str[lower] != str[upper]) {
      return 0;
    }
  }
  return 1;
}