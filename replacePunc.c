#include <string.h>


int replacePunc(char *line){

  int lineLength = 0;
  int character = 0;
  int i = 0;
  int total = 0;

  lineLength = strlen (line);

  for(i=0; i<lineLength;i++){
    character = line[i];
    if((character>32 && character < 48) || (character >57 && character <65) ||( character >90 && character < 97) || (character > 122 && character < 256)){
      line[i] = 32;
      total++;
    }
  }

return (total);
}
