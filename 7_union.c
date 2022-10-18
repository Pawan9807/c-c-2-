#include<stdio.h>

int main()
{
    union store{
        int a;
        char b;

    }reg;

    reg.a=232;
       reg.b='a';
    printf("reg.a store value:%d \n",reg.a);
   
   reg.b='a';
   printf("reg.a store value:%d \n",reg.a);
   printf("reg.b store value:%c \n",reg.b);
     // printf("reg.b store value:%c",reg.b);
   return 0;

}