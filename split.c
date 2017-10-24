#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define AND &&
/*in -> string to split
delim ->deliminator
len -> lenght of the returing string array  */
char** split(char* in,char delim ,int * len){
  char **out,*x,*y,temp[strlen(in)];
  int space,i,j;
  space = 0;
  y = x = in;
   for(;*x!='\0';x++){
     if (*x == delim)
      space++;
   }
   space++;
    *len = space;
   out = (char**)malloc(space*sizeof(char *));
   for(i =0;i<space;i++){
     out[i] = (char*)malloc(strlen(in)*sizeof(char));
   }
   i = 0;
   j = 0;
   while(1){
     if (*y!=delim AND *y!='\0'){
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
    int i,len=0;
  //custom input
    char inp[] = "My";
    out = split(inp,' ',&len);
    //printf("%d\n",len);
    for(i=0;i<len;i++)
      printf("%s\n",out[i]);
    free(out);

    return 0;
}
