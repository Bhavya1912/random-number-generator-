#include<stdio.h>
#include<stdlib.h>
int main()
{
for(int i = 0; i< 10; i++)
{
int *p;
p = (int*)malloc(sizeof(int)); // (definition is lying under the code)
printf(ā%d\nā,p);
}
return 0;
}
