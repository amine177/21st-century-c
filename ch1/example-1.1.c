// all rights go to book author
// compile using: gcc example-1.1.c -o exmample-1.1 -lm -g -Wall -O3 -std=gnu11

#include <math.h>
#include <stdio.h>


int main() {
  printf("Integral(Normal(0, 1), -1.96, 1.96) = %g\n",
      erf(1.96 * sqrt(1/2.)));
}
