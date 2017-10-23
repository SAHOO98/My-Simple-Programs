#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//#define OR ||
#define AND &&

char** split(char* in){
  char **out,*x,*y,temp[strlen(in)];
  int space,i,j;
  space = 0;
  y = x = in;
   for(;*x!='\0';x++){
     if (*x == ' ')
      space++;
   }
   space++;
   out = (char**)malloc(space*sizeof(char *));
   for(i =0;i<space;i++){
     out[i] = (char*)malloc(strlen(in)*sizeof(char));
   }
   i = 0;
   j = 0;
   while(1){
     if (*y!=' ' AND *y!='\0'){
       temp[i] = *y;
       i++;
     }else{
       temp[i] = '\0';
       strcpy(out[j],temp);
       j++;i=0;
       if(*y=='\0')
       break;
     }
     y++;
   }
  return out;
}

int main()
{
    char **out;
    char inp[] = "HEllo World";

    out = split(inp);
    printf("%s\n%s\n",out[0],out[1]);
    free(out);
    return 0;
}
