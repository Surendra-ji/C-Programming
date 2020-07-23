#include<stdio.h>
void main()
{

    int i ,j,k,n=5,no;
    for(i=0;i<n;i++)
    { no=1;
      for(j=0;j<n-i;j++)
            printf(" ");
    for(k=0;k<=i;k++)
    {
    printf("%d ",no);
    no=no*(i-k)/(k+1);
    }
    printf("\n");

    }
}
