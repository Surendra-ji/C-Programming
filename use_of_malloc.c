#include<stdio.h>
int main()
{

    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int *a;
    float avg,sum=0;
    a=calloc(1,sizeof(int));
        for(int i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
       sum=sum+a[i];
       exit();
        }
       avg=sum/n;
    printf("%f",avg);
    return 0;
}
