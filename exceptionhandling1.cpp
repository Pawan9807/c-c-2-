#include <exception>
#include<iostream>
using namespace std;
//user defined exception

struct MyException : public exception
 {
   const char * what() const throw() //what()--> function
    {
      return "C++ Exception";
    }
};
 
int main() 
{
   try {
    int a,b;
    cout<<"enter two number ";
    cin>>a>>b;
    if (b==0)
    {
        MyException c;
        throw c;
    else 
       cout<<"a/b:"<<a/b;

    } 
      
   }
    //catch(MyException& e) { //e is instance  of myexception
      //cout << "MyException caught" <<endl;
 //     cout<< e.what()<<endl;
   //}
    catch(exception& e) {
        
        cout<< e.what()<<endl;
        //cout<<"other error";
    
   }
}