#include <stdio.h>

main() {
 int x=0, y=1, z=0, c=0;

for(c=0;c<20;c++) {
 printf("%d\n", x+y);
 z=x;
 x=y;
 y=x+z;
}
 printf("\n");
}
