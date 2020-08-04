#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a[10]={0,0,0,0,0,0,0,0,0};
 char *s;

    s = malloc(1 * sizeof(char));
    scanf("%[^\n]", s);
    int n=0;
    while(*s)
    {
       // if((int)*s>=48&&(int)*s<=57 //if only count digits
        switch((int)*s)
        {
            case 48:
            a[0]++;
             break;
            case 49:
            a[1]++;
             break;
            case 50:
            a[2]++;
            break;
            case 51:
            a[3]++;
             break;
            case 52:
            a[4]++;
             break;
            case 53:
            a[5]++;
             break;
            case 54:
            a[6]++;
             break;
            case 55:
            a[7]++;
             break;
            case 56:
            a[8]++;
             break;
            case 57:
            a[9]++;
             break;
             default:
             n++;
        }
        s++;
    }
    for(int i=0;i<10;i++)
    printf("%d ",a[i]);
    printf("\nOther then digit %d ",n);


    return 0;
}
