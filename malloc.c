#include<conio.h>
#include<stdio.h>
void main()
{
//char *p;
int *p;
//pr=200;
p=(int *)malloc(sizeof(int));
for(int i=0;i<5;i++)
scanf("%d",&p[i]);
for(int i=0;i<5;i++)
printf("%d",p[i]);
}
