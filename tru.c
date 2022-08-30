#include <stdio.h>

int main(void) {
  void truef(int a, int b, int c) {
    if (a == b && b == c) {
      printf("true\n");
    } else printf("false\n");
  }
  truef(2, 2, 2);
}
