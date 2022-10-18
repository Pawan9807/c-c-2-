// it print character by character
#include<stdio.h>
int main()
{
    FILE *fp,*fp1;
    char c;

    fp=fopen("D:\\file1.txt","r");

    if(fp==NULL)
    printf("\n File doesn't exist");
    while(1)
    {
        c=fgetc(fp);// read char from file
    if (c==EOF)
    break;
    printf("%c",c);
    }
    fclose(fp);

    return 0;
}