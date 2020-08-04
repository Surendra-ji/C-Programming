#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    char str[100],ch[10];
    int i,j,count=0;
    puts("Enter the string");
    gets(str);
    puts("Enter the specific word to count");
    gets(ch);
    int l=strlen(ch);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==" "||str[i]!=" ")
        //for(int a=i;a<strlen(str);a++)

        for(j=0;j<l;i++,j++)
        {
            if(str[i]==ch[j])

                count++;
        }

    }
    count=count/(l-1);
    printf("%d",count);
}







