#include<stdio.h>
#include<stdlib.h>
/*int main()
{
    int a;
    printf("%d",&a);
    return 0;

}
*/
/*
int main()
{
    int *pc,c=32;
    prinf("Address of c:%p\n",&c);
    prinf("Value of c:%p\n",c);

    pc=&c;
    prinf("Address of c:%p\n",pc);
    prinf("content of c:%p\n",*pc);

    c=11;
    prinf("Address of c:%p\n",pc);
    prinf("Value of c:%p\n",*pc);
    
    *p
     return 0;
} 

/*int main()
{
    char *str;
    {
        char a='A';
        str=&a;
    }
    printf("%c",*str);
    return 0;
 }
*/
/*
int main()
{
    int *ptr=NULL;
    printf("the value of ptr is: %x\n",ptr);
    return 0;
} 
*/
/*
int main()
{
    int *ptr=(int*)malloc(sizeof(int));
    int a=345;
    ptr=&a;
    free(ptr);
    ptr=NULL;
    return 0;

}*/

/*
 int *fun()
{
  static int y=10;
    return &y;

}
int main()
{
    int *p=fun();
    printf("%d",*p);
    return 0;
}
*/