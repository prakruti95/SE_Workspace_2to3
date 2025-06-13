#include<iostream>
using namespace std;

class Details
{
    
    public :
        void d1(string fname,string lname,string email,string pass,string cpass)
        {
            cout<<fname<<endl;
            cout<<lname<<endl;
            cout<<email<<endl;
            cout<<pass<<endl;
            cout<<cpass<<endl;
        }
        
         void d1(string fname,string email,string pass,string cpass)
        {
            cout<<fname<<endl;
             cout<<email<<endl;
            cout<<pass<<endl;
            cout<<cpass<<endl;
        }
        
           void d1(char lname[50],string email,string pass,string cpass)
        {
           
            cout<<lname<<endl;
            cout<<email<<endl;
            cout<<pass<<endl;
            cout<<cpass<<endl;
        }
        
           void d1(string email,string pass,string cpass)
        {
           
           
            cout<<email<<endl;
            cout<<pass<<endl;
            cout<<cpass<<endl;
        }
  
    
    
};


int main()
{
    
    Details o = Details();
    
    o.d1("rutvi","mandaliya","r@gmail.com","1234","1234");
    o.d1("vaishavi","v@gmail.com","1234","1234");
    o.d1("raval","g@gmail.com","1234","1234");
    o.d1("s@gmail.com","1234","1234");
    
    return 0;
}
