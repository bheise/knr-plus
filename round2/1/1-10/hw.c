#include <stdio.h>

main() {

  int c;

  c = getchar();

  while( c != EOF) {
//find character 
//replace tab with \t
     if( c == '\t') {
       printf("\\t");
       c = getchar();
     } 
//replace backspace with \b
    if( c == '\b') {
       printf("\\b");
       c = getchar();
    }
//replace backslash with '\\'
     if( c == '\\') {
       printf("\\\\");
       c = getchar();
     }
//replace space
     if( c == ' ') {
       printf("space");
       c = getchar();
     }
     if( c != ' '){
       putchar(c);
       c = getchar();
     }
  }
}
