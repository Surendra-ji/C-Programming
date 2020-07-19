#include<stdio.h>
int fibbonacci(int x);
int main()
{
int i,f;
for(i=1;i<=10;i++)
{
f=fibonacci(i);
printf("%d\n",f);
}
}
int fibonacci(int x)
{
    if(x==1)
    return 0;
    else if(x==2)
    return 1;
    else
    return (fibonacci(x-1)+fibonacci(x-2));
}
