#include<stdio.h>
void main()
{
    int i,j,arr[]={1,6,2,8,4,4,8,4,2,5};
    for(i=0;i<=9;i++)
        for(j=i+1;j<8;j++)
    {
        if(arr[j]==arr[i])
            arr[j]=NULL;
    }
    for(j=0;j<=9;j++)
        printf("%d ",arr[j]);


}
