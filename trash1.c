/* Pointer Testing
Teting Satus:- True*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char ** foo(){
char **o;
o = (char**)malloc(2*sizeof(char*));
o[0] = (char *)malloc(10*sizeof(char));
o[1] = (char *)malloc(10*sizeof(char));

o[0] = "Saptarshi";
o[1] = "Sahoo";

return o;
}

int main() {
  char **O;
  O = foo();
  printf("%s\n%s\n",O[0],O[1]);
  free(O);
  return 0;
}
