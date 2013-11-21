#include <stdio.h>

main() {

int c, countwordlength;
//int wordoccurance[99];
countwordlength = 0;
int arraycount = 5;
int arraybucket;
int wordoccurance[4];

//wordoccurance[arraybucket] = 0;

//for (

for (arraybucket = 0;arraybucket <= arraycount;arraybucket++) {
 wordoccurance[arraybucket] = wordoccurance[arraybucket] + 1;

 //printf("%d | %d \n", arraybucket, countwordlength);
}

while((c = getchar()) != EOF) {
  if(c == ' ' || c == '\n') {
    wordoccurance[countwordlength] = wordoccurance[countwordlength] + 1;
    countwordlength = 0;
    //print(countwordlength);

  } else {
    //prints 26 characters
    countwordlength++;
    printf("%d | %d\n",arraybucket,countwordlength);
}
}
//}
//printf("%d %d\n", arraybucket, countwordlength);
}
