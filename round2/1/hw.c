#include <stdio.h>

main() {

 float fahr, celsius;
 float lower, upper, step;

 lower = 0;
 upper = 300;
 step = 20;

 fahr = lower;

 printf("  F\tC\n");

 while(fahr <= upper) {

  fahr  = 1.8 * (celsius + 32);;
  printf("%3.0f %6.1f\n", fahr, celsius);
  fahr = fahr + step;

 }

}
