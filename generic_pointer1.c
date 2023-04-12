#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
int arry[4] = {2,4,6,1};
void *p;
p=arry;


printf("%d\n",*(int *)p);
return 0;
}
