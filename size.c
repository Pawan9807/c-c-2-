#include<stdio.h>
struct student
{      
    char a;

    char c;

    
};
int main(){
    int a;
   char d;
    printf("size of this:%d \n",sizeof(a));
     printf("size of this:%d \n",sizeof(d));
    struct student stud1;
    printf("size if student structure is %d",sizeof(stud1));
    return 0;
    }