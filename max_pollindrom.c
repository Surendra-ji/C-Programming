#include<stdio.h>
void main()
{
int a[]={1,2,3,4,5},b[]={5,4,6,8,1},un[5],count=0,intersection[10];
int len,i,j,k,size=10,temp;
for(i=0;i<5;i++)
{
    for(j=0,k=0;j<5;j++)
    {
        if(a[i]==b[j])
        {
            un[k]=a[i];
            k++;
            count++;
        }
    }
}
puts("union");
    for(i=0;i<count;i++)
    {
        printf("%d ",un[i]);
    }


    for(i=0;i<5;i++)
         intersection[i]=a[i]; // coping a's value in intersection

    for(i=0;i<10;i++)
    {
        intersection[i+5]=b[i];// coping b's value in intersection
    }


    for(i=0;i<10;i++)
    {
        if(intersection[i]==intersection[i+1])
        {
             size--;
            for(j=i+1;j<10;j++)
            {
                intersection[i]=intersection[j];
                intersection[j]=intersection[j+1];

            }
        }


    }

    puts("Intersection");
    for(i=0;i<size;i++)
        printf("%d ",intersection[i]);

}
