#include<stdio.h>
void main()
{
    int len,j,l,sp[3],k,m,n;
    char str[100],strc[100],temp;
    puts("Enter the string");
    gets(str);
    for(len=0;str[len];len++);
    for(j=0,l=0;j<len;j++)
    {
        if(str[j]==' ')
        {
        sp[l]=j;
        l++;
        }
    }
    l=l-1;
    for(j=0,k=0;j<len+l;j++,k++)
    {
        if(str[j]==' ')
        {
            strc[k]=str[j+1];
            j++;
        }
        else
        {
          strc[k]=str[j];
        }

    }
for(len=0;strc[len];len++);

 for(k=0;k<len/2;k++)
 {
     temp=strc[k];
     strc[k]=strc[len-k-1];
     strc[len-k-1]=temp;
 }
 for(k=0,m=0,n=0;k<len;n++)
 {
     if(n==sp[m])
     {
        str[n]=' ';
        m++;
     }
     else
        {
         str[n]=strc[k];
         k++;
        }
 }
puts(str);
}

