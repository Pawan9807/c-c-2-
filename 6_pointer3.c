#include<stdio.h>
//obtain the address
int main()
{
    char *x,a;
    int *y,b;
     
     printf("the address of a: %p \n",&a);
     printf("the address of b: %p \n",&b);

     x=&a;
     y=&b;

    
     printf("the address of a: %p \n",x);
     printf("the address of b: %p \n",y);

  return 0;
}