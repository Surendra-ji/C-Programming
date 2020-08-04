#include<stdio.h>
void main()
{
    int i,j,l,a=0,t;
    char temp,s[20],c[20];
   puts("Enter string");
    gets(s);
   puts("Enter second string ");
    gets(c);

    for(l=0;s[l];l++);
    for(t=0;c[t];t++);
    if(l==t)
    {
      for(i=0;i<l;i++)
            if((int)s[i]!=(int)c[i])
                {
                puts("string is not equal");
                 break;
                }
    else
   a++;
    }
    if(a==l)
        puts("same string");
}
