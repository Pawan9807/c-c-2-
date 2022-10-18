#include<stdio.h>

void set(int *x,int *y)
{
    *x=23;
    *y=223;

}
int main()
{   int a,b;
    set(&a,&b);

    printf("the value of a=%d and b=%d",a,b);
    return 0;
}