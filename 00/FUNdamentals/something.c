#include <stdio.h>

main() {

  int x = 1;
  int y = 0;
  for(; x<=10; x++) {
   y = x + y;
   //printf("%d\n", y); 
 }
  printf("%d\n", y);
}
