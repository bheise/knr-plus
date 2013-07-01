/* use when compiling: gcc hw.c && ./a.out < c.txt */
/* following example 1.5.2 first version */

#include <stdio.h>

main() {

  /* int c, long blanks, long tabs, long newline; <-- this doesn't work */
  /* find-char pulls up error, camelcase works */

  int findChar;
  long blanks;
  long tabs;
  long newline;

  /* if values are not set to 0 then default memory value is used */
  findChar = 0;
  blanks = 0;
  tabs = 0;
  newline = 0;

  /* f'ing parens got me on this, one right before c need to count - gah  */

  while ((findChar = getchar()) != EOF) {

    /* check for spaces */
    if (findChar == ' ') {
      ++blanks;
    }

    /* check for tabs */
    if (findChar == '\t') {
      ++tabs;
    }

    /* check for new line */
    if (findChar == '\n') {
      ++newline;
    }

  }

   printf("%ld %ld %ld\n", blanks, tabs, newline); /* remember from demo on wed */

}
