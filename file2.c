#include<stdio.h>
int  main()
{
    FILE *fp;
    char buff[255];
    //fp=fopen("D:\\file1.txt","w");
    //fputs("hey my mnepan jndfkja",fp);
    fp=fopen("D:\\file1.txt","r");

    fscanf(fp,"%s",buff);
    printf("1: %s\n",buff);

     //fscanf(fp,"%s",buff);
     fgets(buff,255,(FILE*)fp);
     printf("2: %s\n",buff);

     fgets(buff,255,(FILE*)fp);
     printf("3: %s\n",buff);
     fclose(fp);
   return 0;
}