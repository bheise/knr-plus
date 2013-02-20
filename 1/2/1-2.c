#include <stdio.h>

/* comment block ignored by compiler  */

main()
{

  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  /* fahr = 0 */
  fahr = lower;

  /* values above are used within this condition and below */
  /* 0 <= 300 */
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    
    /* % = splicing a character, d = decimal */
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

}
