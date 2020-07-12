#include<string.h>
#include<stdio.h>

void main()
{

    int i,j,len,h=0;
    int a[26];
    char *s;
  s = malloc(1 * sizeof(char));  //Run time memory allocation
    scanf("%[^\n]", s);
    len=strlen(s);
   i=0;
for(j=0;j<26;j++)
    a[j]=0;
  while(i<=len)
    {
        switch(s[i])
        {
            case 'A':
            case 'a':
               a[0]++;
                break;
            case 'B':
            case 'b':
                a[1]++;
                break;
           case 'C':
            case 'c':
               a[2]++;
                break;
            case 'D':
            case 'd':
                a[3]++;
                break;
            case 'E':
            case 'e':
               a[4]++;
                break;
            case 'F':
            case 'f':
                a[5]++;
                break;
            case 'G':
            case 'g':
               a[6]++;
                break;
            case 'H':
            case 'h':
                a[7]++;
                break;
            case 'I':
            case 'i':
               a[8]++;
                break;
            case 'J':
            case 'j':
                a[9]++;
                break;
            case 'K':
            case 'k':
               a[10]++;
                break;
            case 'L':
            case 'l':
                a[11]++;
                break;
            case 'M':
            case 'm':
               a[12]++;
                break;
            case 'N':
            case 'n':
                a[13]++;
                break;
            case 'O':
            case 'o':
               a[14]++;
                break;
            case 'P':
            case 'p':
                a[15]++;
                break;
            case 'Q':
            case 'q':
               a[16]++;
                break;
            case 'R':
            case 'r':
                a[17]++;
                break;
            case 'S':
            case 's':
               a[18]++;
                break;
            case 'T':
            case 't':
                a[19]++;
                break;
            case 'U':
            case 'u':
               a[20]++;
                break;
            case 'V':
            case 'v':
                a[21]++;
                break;
            case 'W':
            case 'w':
               a[22]++;
                break;
            case 'X':
            case 'x':
                a[23]++;
                break;
            case 'Y':
            case 'y':
               a[24]++;
                break;
            case 'z':
            case 'Z':
                a[25]++;
                break;

            default:
                h++;
        }
    i++;
    }
    for(i=0,j=65;i<26;i++)
    printf("  %c = %d\n",j++,a[i]);
    printf("other things= %d",h);
}
