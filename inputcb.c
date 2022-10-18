#include <stdio.h>

#include <stdio.h>
int main( int argc,char *argv[]) {
    
    printf("program name is:%s \n",argv[0]);
    if(argc<2)
    {
        printf("no argument\n");
        
    }
  else
  
 {
     printf("first argument is :%s %s\n",argv[1],argv[2]);
     
 }
  
   

   return 0;
} 