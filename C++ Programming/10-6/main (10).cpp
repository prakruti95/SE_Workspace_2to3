#include<iostream>
using namespace std;

class Account
{
    
    public:
    int i;
    int a;
    
    Account(int id,int accno)
    {
        i = id;
        a = accno;
    }
    
    void display()
    {
        cout<<i<<endl<<a<<endl;
    }
};


int main()
{
    Account a1 = Account(101,1122);
    Account a2 = Account(102,2233);
    Account a3 = Account(103,3344);
   
   a1.display();
   a2.display();
   a3.display();
    
    return 0;
}