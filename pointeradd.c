#include<stdio.h>
main()
{
int x=5;
int *ptr;
ptr=&x;
printf("value of x= %d\n",x);
printf("address of x= %u\n",&x);
printf("address of x= %u\n",ptr);
printf("value of x= %d\n",*&x);
}
