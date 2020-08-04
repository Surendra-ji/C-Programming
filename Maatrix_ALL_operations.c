#include<stdio.h>
void main()
{
    int i,j,k,a[3][3],b[3][3],c[3][3];
   printf("enter the 9 element of first matrix\n");
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
        {
        scanf("%d",&a[i][j]);
        c[i][j]=0;
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


    puts("MATRIX ADDITION.........");
          for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            c[i][j]=a[i][j]+b[i][j];
    for(i=0;i<3;i++)
       {

        for(j=0;j<3;j++)
            printf("%d ",c[i][j]);
                printf("\n");
       }


   puts("MATRIX SUBTRACTION.........");
            for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            c[i][j]=a[i][j]-b[i][j];
              for(i=0;i<3;i++)
              {
            for(j=0;j<3;j++)
            printf(" %d ",c[i][j]);
            printf("\n");
        }
    puts("product of matrix ............");
           for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            for(k=0;k<3;k++)
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
           // puts("PRODUCT IS.......");
      for(i=0;i<3;i++)
        {for(j=0;j<3;j++)
         printf("%d ",c[i][j]);
         printf("\n");
        }
        puts("TRANSPOSE of first matrix...");
        for(i=0;i<3;i++)
        {
        for(j=0;j<3;j++)
            printf("%d",a[j][i]);
        printf("\n");
        }
         puts("Upper triangular of first matrix...");
        for(i=0;i<3;i++)
        {
        for(j=0;j<3;j++)
            if(i+j<=2)
            printf("%d",a[j][i]);
        else
            printf("#");
        printf("\n");
        }
 puts("Lower triangular of first matrix...");
        for(i=0;i<3;i++)
        {
        for(j=0;j<3;j++)
            if(i+j>=2)
            printf("%d",a[j][i]);
        else
            printf("*");
        printf("\n");
        }
         puts("Main daigonal of first matrix...");
        for(i=0;i<3;i++)
        {
        for(j=0;j<3;j++)
            if(i==j)
            printf("%d",a[j][i]);
        else
            printf("0");
        printf("\n");
        }



}
