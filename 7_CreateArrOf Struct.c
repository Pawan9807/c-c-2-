*#include<stdio.h>
// creating an array of structures
int main()
{
    struct pixel {
        int horz;
        int vert;
        char color;
    } box[4]= {
        {100,23,'r'},
        {200,34,'b'},
        {300,23,'g'}
    };
    /* or method to express
    box[4];
    int x;
     box[0].horz=100;
     box[0].vert=23;
     box[0].color='r';
      for other box[1],box[2] etc
     */