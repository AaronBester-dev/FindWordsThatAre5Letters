
#include <stdio.h>
#include <string.h>
#include "textProc.h"

int main(int argc, char*argv[]){

  char word[500];
  char previousWord[500];
  int wordCount = 1;
  int timesRun = 0;

  while(fgets (word,500, stdin) !=NULL){

    if(timesRun != 0){
      if ((strcmp(word,previousWord)) == 0){
        wordCount++;
      }
      else{
        printf("%03d %s",wordCount,previousWord );
        wordCount = 1;
      }
    }
    /*strcpy function taken from
    https://www.tutorialspoint.com/c_standard_library/c_function_strcpy.html
    */
    strcpy(previousWord,word);
    timesRun++;

  }

printf("%03d %s",wordCount,previousWord );
return(0);
}
