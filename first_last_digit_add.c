#include<stdio.h>
void main()
{

    int no,i,sum=0,last_digit;
    puts("Enter the data");
    scanf("%d",&no);
    last_digit=no%10;
    for(i=0;no>10;i++)
    {
        no=no/10;
    }
    sum=no+last_digit;
    printf("first digit= %d\nlast digit= %d\nsum of first and last digits= %d",no,last_digit,sum);
}
