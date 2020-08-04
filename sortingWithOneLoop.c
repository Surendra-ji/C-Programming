#include<stdio.h>
void main()
{

    int a[]={1,2,7,5,9,0,3,5,9,4};
    int i,j,temp,n=10;
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            i=-1;
        }

    }
for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
