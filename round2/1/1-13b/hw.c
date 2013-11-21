//print a histogram of the lengths of words in its input

#include <stdio.h>

main() {

  //declare variables
  int c, i, wlength;
  int wcount[10];

  //  int wlength = 0;
  //find length of word from input to print out in output horizontally
  //page 16 diagram - characters wide = %1d, %2d, %5d and so forth

  //sets array values to 0
  for (i = 0; i < 10; ++i) {
  //set array values from 0 to 9 to 0
    wcount[i] = 0;
  } 

  //check the character value to -1
  while((c = getchar()) != EOF) {
    //check for blank space or new line
    if(c == ' ' || c == '\n') {
    //add new line when found in txt file
     putchar('\n');
    } else {
    //add characters(words)
     putchar(c);
    }
  }

  //print words with specific lengths 0 - 9
  for(i=0; i<10; ++i) {
    printf(" %d\n", wcount[i]);
  }
}
