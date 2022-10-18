#include<iostream>
using namespace std;
/*
int main()
{
    int a,b,c;
    cin>>a>>b;
    c=a/b;
    cout<<c;

    return 0;
}
*/
/*
int main()
{
    
    int var=0;


   try{
           if(var==0){  //if no exception occured then it never go in the catch
          throw var;
        }
      }
    catch(int ex){
    cout<<"float exception:"<<ex;
   }
   catch(...){
     cout<<"default exception";
   }
} 
*/
/*
double division(int a, int b) {
   if( b == 0 ) {
      throw "Division by zero condition!";
   }
   return (a/b);
}

int main () {
   int x = 50;
   int y = 0;
   double z = 0;
 
   try {
      z = division(x, y);
      cout << z << endl;
   } catch (const char* msg) {
     cerr << msg << endl;
   }

   return 0;
}
*/
/*
void test(int x){

    try{
        if(x>0)
        throw x;

        else 
         throw 'x';
  }
  catch(int x)
  {
    cout<<"catch a integer";

  }
  catch(char x)
  {
    cout<<"catch a character";
  }
}
  int main()
  {
     test(0);
     return 0;
      
  }
  */

 void exceptionhandling(){

    try{
        throw;
    }
    catch(int i)
    {
        cout<<"\n function :wrong output"<<i;
    }
 }

int main()
{
    int var=0;

  cout<<"simple program for rethrowing exception"<<endl;
   try{

          exceptionhandling();
        }
      
    catch(int ex){
    cout<<"\n main input: wrong input:"<<ex;
   }

 return 0; 
}