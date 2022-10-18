#include<stdio.h>
#include<string.h>

int main()
{
    struct date {
        int month;
        int day;
        int year;
    };
    struct person {
        struct date birthday;
        char name[30];
    };
    struct person president;

    president.birthday.month=12;
    president.birthday.day=8;
    president.birthday.year=2000;
    strcpy(president.name,"Pawan verma");
    printf("%s was born on %d/%s/%d \n",
     president.name,
     president.birthday.day,
     president.birthday.month,
     president.birthday.year);
     return 0;
     }