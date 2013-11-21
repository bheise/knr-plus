#include <stdio.h>

main() {
  int i=0;
  int k=10;
  for(i=0,k=10;k>0;i++) {
   printf("%d\n", i);
   k-=i;
  }

}
