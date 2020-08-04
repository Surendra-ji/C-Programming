#include<stdio.h>
#include<conio.h>
struct student
{
 char name[10];
 int roll;
 int marks;

};
main()
{
struct student s[4];
int i;
printf("enter the information of student\n");
for(i=0;i<=3;i++)
{

printf("for roll number \n");
scanf("%d",s[i].roll);

printf("enter name\n");
scanf("%s",s[i].name);

printf("enter marks\n");
scanf("%d",&s[i].marks);
printf("\n");
}
printf("displaying information of student\n");
for(i=0;i<=3;i++)
{
  printf("information for roll number %d\n",s[i].roll);
  printf("name\n",s[i].name);
  printf("marks =%d",s[i].marks);
}
}

