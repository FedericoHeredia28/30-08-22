#include <stdio.h>

int main(void) {
  void is_triangle(int a, int b, int c) {
    if (a + b > c && b + c > a && c + a > b) {
      printf("true\n");
    } else printf("false\n");
  }
  is_triangle(20, 20, 20);
}
