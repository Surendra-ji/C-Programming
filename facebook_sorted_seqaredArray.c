#include<stdio.h>
void main()
{
    int i,j,arr[5],temp;
    printf("Enter the array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        arr[i]=arr[i]*arr[i];

    }
    for(i=0;i<5;i++)
    {

        if(arr[i]>arr[i+1])
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
             i=-1;
        }

    }

    for(i=0;i<5;i++)
    printf("%d ",arr[i]);
}
