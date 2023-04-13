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
/*store hello in heap section */
char *p1 = p;
*p = 'H';
++p;
*p = 'E';
++p;
*p = 'L';
++p;
*p = 'L';
++p;
*p = 'O';
++p;
*p = '\0';
printf("data stored in dynamic memory is%s\n",p1);
return 0;
}
