#include<stdio.h>

int main()
{
    FILE *fp;

   // fp=fopen("D:\\file1.txt","w");
    //fp=fopen("D:\\file1.txt","a");
      fp=fopen("D:\\file1.txt","w+");
      fprintf(fp,"this is landisGyr...\n");
      fputs("hey pawan, how are u...\n",fp);
      fclose(fp);

    return 0;

}