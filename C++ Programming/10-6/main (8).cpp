#include<iostream>
using namespace std;

class Account
{
    public:
    int count = 0;
    
    Account()
    {
        count++;
        cout<<count<<endl;
    }
};

//int Account :: count=0;
int main()
{
    Account a1 = Account();
    Account a2 = Account();
    Account a3 = Account();
   
   
    
    return 0;
}