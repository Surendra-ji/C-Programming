#include<stdio.h>
void pascal(int *);
void main()
{

    int n;
    puts("Enter the number to print pascal ");
    scanf("%d",&n);
    //p=&n;
    pascal(&n);

}
void pascal(int *n)
{
    int r,c,s,no;
    for(r=0;r<*n;r++)
    {
        no=1;
        for(s=0;s<*n-r;s++)
            printf(" ");
        for(c=0;c<=r;c++)
           {
            printf("%d ",no);
            no=no*(r-c)/(c+1);
           }
        printf("\n");
    }

}
