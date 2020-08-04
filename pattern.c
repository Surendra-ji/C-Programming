#include<stdio.h>
main()
{
int i,j,n,k;
printf("Enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n-i;j++)
{
    printf(" ");
}
for(k=1;k<=2*i-1;k++)
{
    printf("*" );

}
printf("\n");
}
return 0;
}
