#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
  srand(time(NULL));
  void ran(int a, int b) {
    int random = rand() % (b - a + 1) + a;
    printf("%d\n", random);
  }
  ran(10, 20);
}
