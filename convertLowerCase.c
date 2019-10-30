#include <string.h>


int convertLowerCase(char *line){

  int lineLength = 0;
  int character = 0;
  int i = 0;
  int total = 0;

  lineLength = strlen (line);

  for(i=0; i<lineLength;i++){
    character = line[i];
    if(character > 64 && character < 91){
      line[i] = character + 32;
      total++;
    }
  }

  return (total);
}
