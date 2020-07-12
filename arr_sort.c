#include<stdio.h>
int main()
{
    int a[5]={1,5,9,2,4},i,temp,j;
    printf("enter the element of an array");
  //  for(i=0;i<5;i++)
    //    scanf("%d",&a[i]);
     for(i=0;i<5;i++)
     { temp=0;
        for(j=i+1;j<5;j++)
        {
          if(a[i]>a[j])
          {temp=a[i];
          a[i]=a[j];
          a[j]=temp;
        }}}
       for(i=0;i<5;i++)
            printf("%d ",a[i]);

    return(0);
}
