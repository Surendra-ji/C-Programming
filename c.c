#include<stdio.h>
#include<conio.h>
main()
{
int x=5;
int *ptr
ptr=&x;
clrscr();
printf("value of x=%d",x);
printf("address of x=%u",&x);
printf("address of x=%u",ptr);
getch();
}
