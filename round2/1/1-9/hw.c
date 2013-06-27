#include <stdio.h>

main() {

//start program
  int c;
  
  c = getchar();
  //read a character
  while ( c != EOF) {
  
  //if space exists then check for other spaces
    if(c == ' ') {
       printf("test\n");
    }
    //write a character  
      putchar(c);
      printf("\n");
      c = getchar();
  }

}
