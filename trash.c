#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define OR ||

void slice_input(char *t,char *out[]){
  char *x,temp[10];
  out[0] = (char *) malloc(strlen(t)*sizeof(char));
  out[1] = (char *)malloc(strlen(t)*sizeof(char));
  int i,j;
   x = t;

  j=0;
  i=0;
  do{
    if (*x!=' '){
      temp[i] = *x;
      i++;
    }else if((*x==' ') OR (*x=='\0')){
      temp[i] = '\0';
      //puts(temp);
      strcpy(out[j],temp);
      j++;i=0;
      if (*x =='\0')
        break;
      }
      x++;
  }while(1);

  }


int main()
{
    char *out[2];
    char inp[] = "HEllo World";

    slice_input(inp,out);
    printf("%s\n%s\n",out[0],out[1]);
    //free(out);
    return 0;
}
