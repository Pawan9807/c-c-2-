/*#include<stdio.h>

int main()
{
    struct pixel {
        int horz;
        int vert;
        char color;
    };
    struct pixel center;//here center is obj of struct whose named is pixel
    center.horz=320;
    center.vert=240;
    center.color='r';

    printf("the pixel at %d,%d is colored ->  ",center.horz,center.vert);
    
    switch(center.color)
    {
        case 'r':
        puts("red");
        break;
       case 'g':
       puts("green");
       case 'y':
       break;

       puts("yellow");
       break;
       default: 
       puts("invalid");
       break;
    }
}
*/
#include<stdio.h>

int main()
{
    struct pixel {
        int horz;
        int vert;
        char color;
    } top,center,bottom;
        
    top.horz=23;
    top.vert=43;
    top.color='r';

    center.horz=34;
    center.vert=423;
    center.color='b';

    bottom.horz=423;
    bottom.vert=42;
    bottom.color='g';

    printf("display top %d,%d,%d \n",top.horz=23,top.vert=43, top.color='r');
  
    printf("display top %d,%d,%d \n", center.horz=34,center.vert=423, center.color='b');
 
    printf("display top %d,%d,%d \t",bottom.horz=423,bottom.vert=42,bottom.color='g');
    return 0;

}
