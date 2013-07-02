#include <stdio.h>

main() {

//start program
  int c;
  
  c = getchar();
  //read a character
  while ( c != EOF) {
  
  //if space exists then check for other spaces
    if( c == ' ') {
      printf("test");
      c = getchar();
//    } else {
//      putchar(c);
//      c = getchar();
    }
    if( c == c ) {
      putchar(c);
      c = getchar();
    }
  }

}
