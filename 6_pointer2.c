#include<stdio.h>

void set(int *x,int *y)
{
    *x=23;
    *y=223;

}
int main()
{   int a,b;
    int *x,*y;

     x=&a;
     y=&b;

    set(x,y);
    printf("the value of a=%d and b=%d",a,b);
    return 0;
}