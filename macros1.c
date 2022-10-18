#include <stdio.h>
#define check(x,y) ((x<y)?printf("minimun",x):printf("maximum",y))
//#define MAX(a,b) ((a>b)?a:b)
int main()
{
	/*int a,b;
	printf("Enter 1st: ");
	scanf("%d",&a);
	printf("Enter 2nd: ");
	scanf("%d",&b);	
	*/
	printf("Minimum number is: %d\n",check(23,32));
  //  printf("Maximum number is: %d \n",MAX(234,23));
	
	return 0;
}
