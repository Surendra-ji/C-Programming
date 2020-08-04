#include<stdio.h>
void main()
{
    int i,j,k,a[3][3];//={1,2,3,4,5,6,7,8,9};
    int b[3][3];//={9,8,7,6,5,4,3,2,1},c[3][3];
printf("enter the 9 element of first matrix\n");
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
        {
        scanf("%d",&a[i][j]);

        }
        }

     printf("enter the 9 element of second matrix\n");
         for(i=0;i<3;i++)
        {
        for(j=0;j<3;j++)
     {
         scanf("%d",&b[i][j]);
     }
        }
      puts("Second matrix is....");
      for(i=0;i<3;i++)
       {
       for(j=0;j<3;j++)
            printf("%d ",b[i][j]);
            printf("\n");
       }
       puts("First matrix is....");
        for(i=0;i<3;i++)
       {
        for(j=0;j<3;j++)
            printf("%d ",a[i][j]);
            printf("\n");
       }
}
