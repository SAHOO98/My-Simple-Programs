#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#define NO_OF_COMMANDS 3
#define NewNode (Node*)malloc(sizeof(Node))

typedef struct node {
  int x;
  struct Node *next;
} Node;

Node *head,*current;

void create(int x){
  printf("Creating..\n");
  head = NewNode;
  head->x = x;
  head->next = NULL;
  current = head;
}

void push(int x){
  Node *t;
  t = NewNode;
  t->x  = x;
  t->next = current;
  current = t;

}

void show(){
  printf("%s\n","Printing.." );
  Node *t;
  t = current;
  do{
    if (t->next != NULL)
    printf("%d->",t->x);
    else
    printf("%d\n",t->x);
    t = t->next;
  }while (t!=NULL);
  puts("\n");
}
void slice_input(char *t,char **out){
  char x[strlen(t)],*delim,*token;
  int i;

  strcpy(x,t);
  delim = " ";
  token = strtok(x,delim);
  if (token==NULL){
    strcpy(out[0],x);
    strcpy(out[1]," ");
    return;
  }

  i = 0;
  while (token!=NULL){
    out[i]=token;
    token = strtok(NULL,delim);
    i++;
  }
}

void command_process(char *h){
  char ar[strlen(h)],*sliced_input[2];
  char *cmds[]={"create","insert","show"};
  puts("check!!");
  strcpy(ar,h);
  puts("check!!");
  slice_input(h,sliced_input);
  puts("check!!");
  puts(sliced_input[0]);
  puts(sliced_input[1]);
  if (strcmp(sliced_input[0],cmds[0])==0){
    puts(sliced_input[0]);
  }else if(strcmp(sliced_input[0],cmds[1])==0){
    puts(sliced_input[0]);
    puts(sliced_input[1]);

  }else if(strcmp(sliced_input[0],cmds[2])==0){
    puts(sliced_input[0]);

  }

}
int main() {
  int x,y = 1,ch;
  char *help  = "1:-Create\n2:-Insert at rear end\n3:-Show the list";
  char inp[10];
  puts(help);
  while (1){
    printf(">>");
    fgets(inp,10,stdin);
    //fflush(stdin);
    command_process(inp);
  }
  /*while (y==1) {
    puts("1:-Create\n2:-Insert at rear end\n3:-Show the list");
    scanf("%d",&ch);
    switch (ch) {
      case 1:
      printf("Enter a number:-\n");
      scanf("%d",&x);
      create(x);
      break;

      case 2:
      puts("Enter a number:-\n");
      scanf("%d",&x);
      push(x);
      break;

      case 3:
      print();
      break;

      default:
      puts("Wrong Input!!");
    }
    puts("Enter 1 to continue, 0 to end:-\n");
    scanf("%d",&y);
  }*/
  return 0;
}
