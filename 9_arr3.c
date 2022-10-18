#include<stdio.h>#
int main ()
{
    int a[50];
    printf("size of integer %lu \n",sizeof(int));
    for (int i=0;i<5;i++)
    printf("address arr[%d] is %p\n",i,&a[i]);

    return 0;

}