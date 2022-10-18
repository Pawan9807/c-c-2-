#include<stdio.h>
int multiply(int a)
{
   // printf("enter number ");
 //   scanf("%d",&a);
    return a*a;
    }
int addition()
{  int a,b;
    printf("enter the number");
    scanf("%d %d",&a,&b);
    return a+b;

}
int main()
{
    int result;
  
    int (*ptr)();

    ptr=&addition;
     result=(*ptr)();
    printf("The sum is %d \n",result);

    ptr=&multiply;
    result=(*ptr)(5);
    printf("The multiply is %d",result);
    return 0;
    

}
