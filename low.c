#include <stdio.h>

void to_lower_case(char *s) {
  int i = 0;
  while (s[i] != 0) {
    if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
      i++;
    }
  }
}



int main(int argc, char *argv[]) {
  printf("%s\n", argv[1]);
  to_lower_case(argv[1]);
  printf("%s\n", argv[1]);
}
