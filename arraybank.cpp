#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<fstream>
using namespace std;
int f=0;
int homestruc();
// void choice()
// {
//  cout<<endl;
//  cout<<"PRESS..!!"<<endl;
//  cout<<"1. Create new account"<<endl;
//  cout<<"2. Update information of existing account"<<endl;
//  cout<<"3. Check the details of an existing account"<<endl;
//  cout<<"4. For transactions"<<endl;
//  cout<<"5. Remove existing account"<<endl;
//  cout<<"6. View customers list"<<endl;
//  cout<<"7. Exit"<<endl;
// }
string f_name[20];
string l_name[20];
string phone_no[20];
string email[20];
string user_name[20];
string p_word[20];
int transaction[20];
int a=0;
void createdb();
void readdb();
class Account{
    // private:
    public:
        // Account()
        // {
        //  a=0;
        // }
        void Register()
        {
                int b=0;
                cout<<"How many accounts do you wanted to create"<<endl;
                cin>>b;
                if(a==0)
                {
                    a=a+b;
                for(int i=0;i<b;i++)
                {
                cout<<"\n\t----Enter Data----"<<endl<<endl;
                cout<<"Enter name of person: ";
                cin>>f_name[i];
                cout<<"Enter last name of person: ";
                cin>>l_name[i];
                cout<<"Enter phone number: ";
                cin>>phone_no[i];
                cout<<"Enter email: ";
                cin>>email[i];
                cout<<"Enter username: ";
                cin>>user_name[i];
                cout<<"Enter password: ";
                cin>>p_word[i];
                cout<<"Transaction: ";
                cin>>transaction[i];
                }
                cout<<"Creating new account please wait";
                for(int i=0;i<5;i++)
                {
                    cout<<".";
                    Sleep(500);
                }
                Sleep(3000);
                system("CLS");
                cout<<"New Accounts is Created..!!"<<endl;
                a=b;
              }
              else{
                for(int i= a;i<a+b;i++)
                {
                cout<<"\n\t----Enter Data----"<<endl<<endl;
                cout<<"Enter name of person: ";
                cin>>f_name[i];
                cout<<"Enter last name of person: ";
                cin>>l_name[i];
                cout<<"Enter phone number: ";
                cin>>phone_no[i];
                cout<<"Enter email: ";
                cin>>email[i];
                cout<<"Enter username: ";
                cin>>user_name[i];
                cout<<"Enter password: ";
                cin>>p_word[i];
                cout<<"Transaction: ";
                cin>>transaction[i];
                }
                cout<<"Creating new account please wait ";
                for(int i=0;i<5;i++)
                {
                    cout<<".";
                    Sleep(500);
                }
                Sleep(3000);
               // system("CLS");
                cout<<"New Accounts is Created..!!"<<endl;
                a=a+b;
              }
        }
    void login()
    {
        if(a==0)
          {
                    cout<<"No record found , Please Register!"<<endl;
                    f=1;
                    cout<<endl;
          }
        else{
                    string username;
                    string password;
                cout<<"Enter username  and password in which you want to login"<<endl;
                cin>>username;
                cin>>password;
                int flag=0;
                for(int i=0;i<a;i++)
                {
                if(username==user_name[i] && password==p_word[i])
                {
                    cout<<" you are signed in: "<<endl;
                    flag=1;
                }
                }
                if(flag!=1)
                {
                    cout<<" Incorrect Credential , Try again!  "<<endl;
                }
                //1choice();
          }
    }
    void transfer()
    {
        if(a==0)
        {
            cout<<"No data is entered"<<endl;
        }
        else{
            string username;
            string password;
            cout<<"Enter username and password of account in which you want to transaction"<<endl;
            cin>>username;
            cin>>password;
            for(int i=0;i<a;i++)
                {
                    if(username==user_name[i]&& password==p_word[i])
                   {
                    cout<<"\t\n----Data----"<<endl<<endl;
                    cout<<"Name: "<<f_name[i]<<endl;
                    cout<<"Last name: "<<l_name[i]<<endl;
                    cout<<"Phone: "<<phone_no[i]<<endl;
                    cout<<"Email: "<<email[i]<<endl;
                    cout<<"Username: "<<user_name[i]<<endl;
                    cout<<"Password: "<<p_word[i]<<endl;
                    cout<<"Transaction: "<<transaction[i]<<endl;
                  }
               }
                int press;
                cout<<"Press 1 for deposit"<<endl;
                cout<<"Press 2 for withdraw"<<endl;
                cin>>press;
                if(press==1)
                {
                for(int i=0;i<a;i++)
                {
                if(username==user_name[i])
                {
                    int money,sum=0;
                    cout<<"Existing money: "<<transaction[i]<<endl;
                    cout<<"Enter money which you want to add"<<endl;
                    cin>>money;
                    sum=transaction[i]+money;
                    transaction[i]=sum;
                    cout<<"\n"<<money<<"Rs is added in this account"<<endl<<endl;
                }
                }
                }
              else if(press==2)
              {
                    for(int i=0;i<a;i++)
                {
                if(username==user_name[i])
                {
                    int money,sub=0;
                    cout<<"Existing money: "<<transaction[i]<<endl;
                    cout<<"Enter money which you want to withdraw"<<endl;
                    cin>>money;
                    sub=transaction[i]-money;
                    transaction[i]=sub;
                    cout<<"\n"<<money<<"Rs is withdraw from this account"<<endl<<endl;
                }
                }
              }
              else 
              {
                cout<<"Invalid input"<<endl;
              }
        }
    }
    void delete_a()
    {
                if(a==0)
                {
                    cout<<"No data is entered"<<endl;
                }
                else{
                int press;
                cout<<"Press 1 to delete specific record"<<endl;
                cout<<"Press 2 to delete full record"<<endl;
                cin>>press;
                if(press==1)
                {
                    string username;
                    cout<<"Enter username of account  which you want to delete"<<endl;
                    cin>>username;
                    for(int i=0;i<a;i++)
                    {
                    if(username==user_name[i])
                    {
                        for(int j=i;j<a;j++)
                        {
                        f_name[j]=f_name[j];
                        l_name[j]=l_name[j+1];
                        phone_no[j]=phone_no[j+1];
                        email[j]=email[j+1];
                        user_name[j]=user_name[j+1];
                        p_word[j]=p_word[j+1];
                        transaction[j]=transaction[j+1];
                        }
                        a--;
                        cout<<"Required record is deleted..!!"<<endl;
                        cout<<endl;
                        // cout<<" To View List press 1"<<endl;
                        // int it3;
                        // cin>>it3;
                        // if(it3==1)
                        // list_account();
                    }
                    }
                }
                else if(press==2)
                {
                        a=0;
                        cout<<"All records are deleted"<<endl;
                }
                else{
                        cout<<"Invalid input"<<endl;
                    }
                //func();
                }
    }
    void list_account()
    {
                if(a==0)
                {
                    cout<<"No data is entered"<<endl;
                }
                else{
                cout<<"\t\t----Data----"<<endl<<endl;
                for(int i=0;i<a;i++)
                {
                cout<<"\nData of person "<<i+1<<endl<<endl;
                    cout<<"Name: "<<f_name[i]<<endl;
                    cout<<"Last name: "<<l_name[i]<<endl;
                    cout<<"Phone: "<<phone_no[i]<<endl;
                    cout<<"Email: "<<email[i]<<endl;
                    cout<<"Username: "<<user_name[i]<<endl;
                    cout<<"Password: "<<p_word[i]<<endl;
                    cout<<"Transaction: "<<transaction[i]<<endl;
            }
        }
    }
         void update()
         {
            if(a==0)
                {
                    cout<<"No data is entered"<<endl;
                }
                else{
                    string username;
                cout<<"Enter username which you want to update"<<endl;
                cin>>username;
                for(int i=0;i<a;i++)
                {
                if(username==user_name[i])
                {
                    cout<<"\t\n----Data----"<<endl<<endl;
                    cout<<"Name: "<<f_name[i]<<endl;
                    cout<<"Last name: "<<l_name[i]<<endl;
                    cout<<"Phone: "<<phone_no[i]<<endl;
                    cout<<"Email: "<<email[i]<<endl;
                    cout<<"Username: "<<user_name[i]<<endl;
                    cout<<"Password: "<<p_word[i]<<endl;
                    cout<<"Transaction: "<<transaction[i]<<endl;
                    cout<<endl;
                cout<<"\n\t----Enter Data----"<<endl<<endl;
                cout<<"Enter name of person: ";
                cin>>f_name[i];
                cout<<"Enter last name of person: ";
                cin>>l_name[i];
                cout<<"Enter phone number: ";
                cin>>phone_no[i];
                cout<<"Enter email: ";
                cin>>email[i];
                cout<<"Enter username: ";
                cin>>user_name[i];
                cout<<"Enter password: ";
                cin>>p_word[i];
                cout<<"Transaction: ";
                cin>>transaction[i];
                }
                }
            }
        }       
    void check_details()
    {
        if(a==0)
                {
                    cout<<"No data is entered"<<endl;
                }
                else{
                string username;
                cout<<"Enter username"<<endl;
                cin>>username;
                for(int i=0;i<a;i++)
                {
                if(username==user_name[i])
                {
                    cout<<"\n\t----Data----"<<endl<<endl;
                    cout<<"Name: "<<f_name[i]<<endl;
                    cout<<"Last name: "<<l_name[i]<<endl;
                    cout<<"Phone: "<<phone_no[i]<<endl;
                    cout<<"Email: "<<email[i]<<endl;
                    cout<<"Username: "<<user_name[i]<<endl;
                    // cout<<"Password: "<<p_word<<endl;
                    cout<<"Transaction: "<<transaction[i]<<endl;
                }
            }
    }
    }
    void view_balance(){
        if(a==0)
                {
                    cout<<"No data is entered"<<endl;
                }
                else{
                string username;
                cout<<"Enter username"<<endl;
                cin>>username;
                for(int i=0;i<a;i++)
                {
                if(username==user_name[i])
                {
                     cout<<" Your Balance: "<<transaction[i]<<endl;
                }
            }
    }
    }
        void Exit( int x)
        {
             if(x==7)
              {
                cout<<"Thank You..!!"<<endl;
                createdb();
                exit(0);
              }
            else{
                cout<<"Invalid input"<<endl;
            }
        }
};
class Bank
{
    Bank ()
    {
       Bank_id=4587;
       branch= "MMMEC";
       IFSC= "TBIN0002578"; 
    }
    public:
    int Bank_id;
    string branch;
    string IFSC;
    void noOfAccount()
    {
        cout<<" total No. of account is : "<<a<<endl;
    }
    void total_balance()
    {
        float cnt;
        for(int i=0;i<a;i++)
        cnt+= transaction[i];
        cout<<"Present Balance is :"<<cnt<<endl;
    }
    void View_bank_details()
    {
        cout<< "Bank Id is: "<<Bank_id<<endl;
        cout<< "Branch is : "<<branch<<endl;
        cout<<" IFSC Code is : "<<IFSC<<endl;
    }
};          
class Loan{
    private:
    int loan_id;
    void reader_input(float &loan, float &rate, int &time) {
    cout << "Enter in the loan you want in Rs.: ";
    cin >> loan;
    // cout << "What will the interest rate be percentage wise? (value must be 1 to 25): ";
    // cin >> rate;
    cout << "Enter in the duration of the loan in months: ";
    cin >> time;
}
void calculations(float &rate, float &loan, int &time, float &interest, float &totalinterest,
                    float &debt, float &monthlypay, float &years) {
    rate = 0.09;
    interest = loan * rate;
    years = time / 12;
    totalinterest = interest * years;
    debt = totalinterest + loan;
    monthlypay = debt / time;
}
void read_output(float &debt, float &monthlypay) {
    system("cls");
    cout<<"\n\t\t\t You have applied for the loan !"<<endl;
    cout<<endl;
    cout << "The debt is " << debt << " rupies." << endl;
    cout << "The monthly payment is " << monthlypay << " rupies." << endl;
    cout<<"........................................................................................................................................................................"<<endl;
}
public:
void take_loan()
{
    float loan, rate, interest, totalinterest, debt, monthlypay, years;
    int time;  // I'm guessing you only intend to allow whole numbers (1-12)
    reader_input(loan, rate, time);
    calculations(rate, loan, time, interest, totalinterest, debt, monthlypay, years);
    read_output(debt, monthlypay);
}
};
class Customer: public Account
{
    private:
    int cust_id;
    public:
    void myprofile()
    {
        int it;
        cout<<"\n\n Accounts--->1\t\t\t Loans---->2\t\t\t Setting------>3\t\t\t View Balance -->4"<<endl;
        cin>>it;
        if(it==1)
        {
            cout<<endl;
            cout<<endl;
            cout<<"PRESS..!!"<<endl;
            //cout<<"1. Create new account"<<endl;
            cout<<"2. Update information of existing account"<<endl;
            cout<<"3. Check the details of an existing account"<<endl;
            cout<<"4. For transactions"<<endl;
            cout<<"5. Remove existing account"<<endl;
            cout<<"6. To View List"<<endl;
            cout<<"7. Exit"<<endl;
            int it1;
            cin>>it1;
            switch(it1){
                case 2:
                {
                    update();
                    cout<<endl;
                    myprofile();
                }
                break;
                case 3:
                {
                    // cout<<" checking"<<endl;
                    check_details();
                    // cout<<endl;
                    // 
                }
                break;
                case 4:
                {
                    transfer();
                    cout<<endl;
                    myprofile();
                }
                break;
                case 5:
                {
                    delete_a();
                    cout<<endl;
                    myprofile();
                }
                break;
                case 7:
                    homestruc();
                break;
                case 6:
                    list_account();
                break;
                default:
                cout<<"Invalid Input!"<<endl;
                break;
            }
            if(it1!=7){
                myprofile();
            }
        }
        else if(it==2)
        {
            Loan a;
            a.take_loan();
            // system("cls");
            myprofile();
        }
        else if(it==4)
        {
          view_balance();
        //   system("cls");
        cout<<"****************************************************************************************************************************\n"<<endl;
          myprofile();
        }
    }
};
int homestruc(){
    Customer c;
    cout<<"\n Enter 1 to register \n\n Enter 2 to login \n\n Enter 4 to Exit"<<endl;
    int press;
    cin>>press;
    // func();
    if( press==1)
    {
        system("CLS");
        c.Register();
        system("CLS");
        c.login();
        system("CLS");
        c.myprofile();
        // cout<<"end";
        //system("CLS");
        // homestruc();
    }
    else if(press==2)
    {
        c.login();
        if(f==0)
        c.myprofile();
        else{
            createdb();
            exit(0);
        }
        // homestruc();
    }
    // else if(press==3)
    // {
    //     Loan l;
    //     l.take_loan();
    // }
    else if(press!=4)
    {
        cout<<"invalid input "<<endl;
         homestruc();
    }
    else{
        createdb();
        exit(0);
    }
}
void createdb(){
    ofstream bankdb("bankdb.txt");
    int pt;
    for(int i=0;i<a;i++){
        bankdb<<f_name[i]<<endl;
        bankdb<<l_name[i]<<endl;
        bankdb<<phone_no[i]<<endl;
        bankdb<<email[i]<<endl;
        bankdb<<user_name[i]<<endl;
        bankdb<<p_word[i]<<endl;
        bankdb<<transaction[i]<<endl;
    }
    bankdb.close();
}
void readdb(){
    ifstream bankdb("bankdb.txt");
    string st;
    int i=0;
    while(bankdb.eof()==0){
        getline(bankdb,st);
        if(st>""){
            f_name[i]=st;
            getline(bankdb,st);
            l_name[i]=st;
            getline(bankdb,st);
            phone_no[i]=st;
            getline(bankdb,st);
            email[i]=st;
            getline(bankdb,st);
            user_name[i]=st;
            getline(bankdb,st);
            p_word[i]=st;
            getline(bankdb,st);
            transaction[i]=stoi(st);
            i++;
        }
    }
    a=i;
    bankdb.close();
}
int main()
{
    readdb();
    system("cls");
    system("color F5");
    homestruc();
    createdb();
   return 0;
}