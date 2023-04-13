#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
char *p = NULL;
p = (char *) malloc(6* sizeof(char));
if(p==NULL){
  printf("memeory allocation using malloc failed\n");
  return -1;
}
else{
  printf("memory allocation success\n");
}
return 0;
}
