#include <stdio.h>

main () {

int c,resetArray,wordLengthNum,wordOccMarker, wordLength;
int wordOccurances[7];
wordLength = 0;

for(resetArray=0;resetArray<7;resetArray++) {
  wordOccurances[resetArray] = 0;
}

//read in characters
while ((c = getchar()) != EOF) {

  //check for spaces and new line
  if(c == ' ' || c == '\n') {
   
   //store word length into array
   wordOccurances[wordLength] = wordOccurances[wordLength] + 1;

   //print word length
   wordLength = 0;

  } else {

    //found part of a word
    wordLength = wordLength + 1;
  }
}
 
   for(wordLengthNum = 0; wordLengthNum < 7; wordLengthNum++) {
     printf("%d | %d = ", wordLengthNum, wordOccurances[wordLengthNum]); 
   for(wordOccMarker = 0; wordOccMarker < wordOccurances[wordLengthNum]; wordOccMarker++) {
    printf("x");
   }
    printf("\n");
  }
}
