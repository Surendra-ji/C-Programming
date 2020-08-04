#include<stdio.h>
int fact(int);
int main()
{
int n,s;
printf("enter any number\n");
scanf("%d",&n);
s=fact(n);
printf("factorial is:= %d",s);

}
int fact(int n)
{
     if(n==0||n==1)
        return(1);
    else
        return n*fact(n-1);
}
