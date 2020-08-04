#include<stdio.h>
int main()
{
    int i,l,j=0,count=0;
    char str[100];
    puts("enter the string");
    gets(str);
    for(l=0;str[l];l++);
   char revStr[l];
    //revers logic
    for(i=l-1;i>=0;i--)
    {
        revStr[j++]=str[i];
    }
    revStr[j]='\0';
    printf("Reversed string is = %s\n",revStr);

    //pollindrom logic
    for(i=0;i<l;i++)
        {
            if(str[i]==str[l-1-i])
            count++;
            else
               {
                printf("Given string is not pollindrom = %s",str);
                exit(1);
               }
        }
        if(count==l)
            printf("%s is pollindrom.",str);
        return 0;
}
