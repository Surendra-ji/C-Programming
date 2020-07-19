#include<stdio.h>
void main()
{

    int in,i,count=0,temp;
    printf("Enter the number...\n");
    scanf("%d",&in);
    for(i=1;i<=in;i++)
    {
        temp=i;
        while(temp>0)
        {

            temp=temp/10;
            count++;
            temp=temp%10;

        }

    }
    printf("\n%d",count);
}
