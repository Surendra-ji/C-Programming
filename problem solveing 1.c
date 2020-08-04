
#include<stdio.h>
void main()
{
    int len=0,len1,k=5,ex,i=0;
    char s[]="azerdii";
   // gets(s);
    puts(s);
    for(len=1;s[len];len++);
len1=len;
ex=len-k;

int ar[ex+1],j=0,temp=0;
for(i=0;i<=ex;i++)
    ar[i]=0;
for(j=0;j<=ex;j++)
{
    for(i=j;i<k+j;i++)
{

   if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        ar[j]++;

}

}
for(i=0,j=i+1;i<ex;i++)
if(ar[i]>ar[j])
temp=i;
else{
j++;
    temp=j;
}
printf("%d\n",temp);
for(i=temp-1;i<=k+1;i++)
{
    printf("%c",s[i]);
}

}
