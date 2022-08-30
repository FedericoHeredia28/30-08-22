#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double roots(double a, double b, double c) {
  // formula
  double discriminant = b*b - 4*a*c;
  double root = sqrt(discriminant);
  double x1 = (-b + root) / (2*a);
  double x2 = (-b - root) / (2*a);
  return x1;
}

int main(int argc, char *argv[]) {
  double a = atoi(argv[1]);
  double b = atoi(argv[2]);
  double c = atoi(argv[3]);
  printf("%2.f\n", roots(a,b,c));
}
