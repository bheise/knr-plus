#include <stdio.h>

/*

 \t = tab
 \n = new line, possibly preferrable way of doing a carriage return
 \\ = backslash
 \c = character but warning pops up after compiling
 \r = does nothing
 \b = backslash

*/

main() 
{
  printf("hello, world \t \n");
  printf("hello, world \c \t \n");
  printf("hello \\ world \t \n");
  printf("hello, world\b \t \n");
  printf("hello, world \n");
  printf("hello,world \r"); /* this is ignored */
}
