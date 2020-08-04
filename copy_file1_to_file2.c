#include<stdio.h>
#include<stdlib.h>

void main() {
   FILE *fp1, *fp2;
   char ch;
   fp1 = fopen("copy_file1_to_file2.c", "r");
   fp2 = fopen("Output.txt", "w");

   while (1) {
      ch = fgetc(fp1);

      if (ch == EOF)
         break;
      else if(ch=='a')
        putc('*',fp2);

        else
         putc(ch, fp2);
   }

   printf("File copied Successfully!");
   fclose(fp1);
   fclose(fp2);
}
