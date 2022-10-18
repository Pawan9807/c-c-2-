#include<stdio.h>
int main(){
    int a[5];
    a[0]=5;
    a[2]=-10;
    a[3/2]=2;
    a[3]=a[0];
    int a1[6]={10,20,30,40};
    
    printf("%d  %d  %d %d \n",a[0],a[1],a[2],a[3]);
    printf("%d %d %d %d %d %d ",a1[0],a1[1],a1[2],a[3],a[4],a[5]);

return 0;
