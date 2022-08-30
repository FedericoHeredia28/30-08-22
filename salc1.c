#include <stdio.h>

int main(void) {
  void saludar(char *s) {
    printf("Hola, %s\n", s);
  }
  saludar("Juan");
}
