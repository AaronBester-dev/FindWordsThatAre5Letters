#include <string.h>



int replaceDigits(char *line){

  int lineLength = 0;
  int character = 0;
  int i = 0;
  int total = 0;

  lineLength = strlen (line);

  for(i=0; i<lineLength;i++){
    character = line[i];
    if(character>47 && character < 58){
      line[i] = 32;
      total++;
    }
  }

  return (total);
}
