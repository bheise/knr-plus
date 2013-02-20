#include <stdio.h>

/* comment block ignored by compiler  */

main()
{

  int fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  /* fahr = 0 */
  fahr = lower;

  /* header */
  printf("\n  Temperatures \n\n");

  /* values above are used within this condition and below */
  /* 0 <= 300 */
  while (fahr <= upper) {
    celsius = 5 * (fahr-32) / 9;
    
    /* % = splicing a character, d = decimal */
    printf("%3d\t%6d\n", fahr, celsius);
    fahr = fahr + step;
  }

}
