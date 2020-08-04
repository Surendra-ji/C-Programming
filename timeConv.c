#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,z;
    char s[10];
    for(a=0;a<10;a++)
    scanf("%c",&s[a]);
    if(s[8]=='P'&&atoi(s)!=12)
   {
     z=atoi(s);
     z=z+12;
     printf("%d",z);
     for(a=2;a<=7;a++)
        printf("%c",s[a]);
   }
   else if(s[8]=='A'&&atoi(s)==12)
   {

      printf("00");
       for(a=2;a<=7;a++)
        printf("%c",s[a]);

   }
   else if(s[8]=='P'&&atoi(s)==12)
   {
    for(a=0;a<8;a++)
    printf("%c",s[a]);
   }
    else
   {
    for(a=0;a<8;a++)
    printf("%c",s[a]);
   }
return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,z;
    char s[10];
    for(a=0;a<10;a++)
    scanf("%c",&s[a]);
    if(s[8]=='P'&&atoi(s)!=12)
   {
     z=atoi(s);
     z=z+12;
     printf("%d",z);
     for(a=2;a<=7;a++)
        printf("%c",s[a]);
   }
   else if(s[8]=='A'&&atoi(s)==12)
   {

      printf("00");
       for(a=2;a<=7;a++)
        printf("%c",s[a]);

   }
   else if(s[8]=='P'&&atoi(s)==12)
   {
    for(a=0;a<8;a++)
    printf("%c",s[a]);
   }
    else
   {
    for(a=0;a<8;a++)
    printf("%c",s[a]);
   }
return 0;
}
