#include<stdio.h>

#define add
//#define sub
//#define mul
int main()
{
    #ifdef add
    int a,b,c;

    printf("enter a and b value");
    scanf("%d ,%d",&a,&b);
    c=a+b;
    printf("result :%d",c);
    #endif

    /*#ifdef sub
     int a,b,c;

    printf("enter a and b value");
    scanf("%d ,%d",&a,&b);
    c=a-b;
    printf("result :%d",c);
    
    #endif

    #ifdef mul
     int a,b,c;

    printf("enter a and b value");
    scanf("%d ,%d",&a,&b);
    c=a*b;
    printf("result :%d",c);
    
    #endif
    */
    return 0;
}
