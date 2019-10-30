#include <string.h>


int trim (char *line){

  int lineLength = 0;
  int character = 0;
  int i = 0;
  int stop = 0;

  lineLength = strlen (line);
  if((line[0]== 32)|(line[lineLength-1]==32)){

      for(i=0; i < lineLength;i++){
        character = line[i];
        if((character == 32 && stop == 0) || (character == 9 && stop == 0)){
        line[i] = 127;
      }
      else{
        stop = 1;
      }
      }

      stop = 0;

      for(i = lineLength-1; i>0; i--){
        character = line[i];
      if((character == 32 && stop == 0 )|| (character == 9 && stop == 0)){
        line[i] = 127;
      }

      else{
        stop = 1;
      }

      }
      return(0);
  }

  return(-1);
}
