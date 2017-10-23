#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void foo(char *t,char **out){
  out[0] = (char *)malloc(strlen(t)*sizeof(char));
  out[1] = (char *)malloc(strlen(t)*sizeof(char));
  out[0] = "jfnldjfdl";
  out[1] = "ffrgdgfd";

}

int main(){
  char *out[2];
  char inp[]="Hello World!!";
  foo(inp,out);
  printf("%s\n%s",out[0],out[1]);
  return 0;
}
