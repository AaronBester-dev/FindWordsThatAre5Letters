#include <string.h>


int reduceSpace(char *line){

  int lineLength = 0;
  int character = 0;
  int nextCharacter = 0;
  int i = 0;
  int total = 0;

  lineLength = strlen (line);

  for(i=0; i<=(lineLength);i++){
    character = line[i];
    nextCharacter = line[i+1];

    if(character == 9){
      line[i] = 32;
      total++;
    }

    if((character ==  32) && (nextCharacter == 32)){
      line[i] = *(" ");
      total++;
    }

  }
  return(total);
}
