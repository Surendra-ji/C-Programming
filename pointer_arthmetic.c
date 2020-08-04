#include <stdio.h>

int main()
{
    int m = 5, n = 10, o = 0;

    int *p1;
    int *p2;
    int *p3;

    p1 = &m;    //printing the address of m
    p2 = &n;    //printing the address of n

    printf("p1 = %d\n", p1);
    printf("p2 = %d\n", p2);

    o = *p1+*p2;
    printf("*p1+*p2 = %d\n", o);//point 1

    p3 = p1-p2;
    printf("p1 - p2 = %d\n", p3); //point 2

    p1++;
    printf("p1++ = %d\n", p1); //point 3

    p2--;
    printf("p2-- = %d\n", p2); //point 4

    //Below line will give ERROR
  //  printf("p1+p2 = %d\n", p1+p2); //point 5

    return 0;
}
