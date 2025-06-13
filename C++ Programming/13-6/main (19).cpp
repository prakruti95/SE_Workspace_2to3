#include<iostream>
using namespace std;

class RBI
{
    public:
    int roi()
    {
        return 0;
    }
};
class Sbi : public RBI
{
    public:
    int roi()
    {
        return 7;
    }
};
class Icici : public RBI
{
    public:
    int roi()
    {
        return 8;
    }
};
class Axis : public RBI
{
    public:
    int roi()
    {
        return 9;
    }
};


int main()
{
    
     //Sbi s;
    // cout<<s.roi()<<endl;
    // Icici i;
    // Axis a;
    
     RBI r;
    
     r = Sbi();
     cout<<r.roi()<<endl;
     
     r = Icici();
     cout<<r.roi()<<endl;
     
     r = Axis();
     cout<<r.roi()<<endl;
    
    
  
   
    
    return 0;
}
