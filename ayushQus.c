#include<stdio.h>
#include<conio.h>

int main()
{
int n, i, fact=0;
scanf("%d",&n);
char a[n];
gets(a) ;
for(i=0;i<=n;i++) ;
{
if(a[i]=='H'&&a[i+1]=='H')
{
fact=1;
break;
}
}
if(fact==1)
printf("NO") ;
else
{
printf("YES") ;
for(i=0;i<=n;i++);
{
if(a[i]=='.')
printf("B" ) ;
else
printf("H") ;
}
}
}
