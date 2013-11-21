#include <stdio.h>

main() {

  int arrayLength = 26;
  int myArray[arrayLength];
  int bucketNum;
  int bucketValue = 97;
  int letterOccurance;

 /*  myArray[0] = 97;
  myArray[1] = 98;
  myArray[2] = 99;
  myArray[3] = 100;
  myArray[4] = 101; */

  for(bucketNum = 0; bucketNum < arrayLength; bucketNum++) {
    myArray[bucketNum] = bucketValue;
    bucketValue = bucketValue + 1;
  }

  for(bucketNum = 0; bucketNum < arrayLength; bucketNum++) { 
   // printf("%d %c \n", myArray[bucketNum], putchar(myArray[bucketNum]));
   printf("%c | ", myArray[bucketNum]); 
//    for(letterOccurance = 0; letterOccurance < myArray[arrayLength]; letterOccurance++) {
     // printf("%d", arrayLength]);
//     printf("x");
//    }
    printf("\n");
 }


}
