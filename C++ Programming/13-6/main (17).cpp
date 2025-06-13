#include<iostream>
using namespace std;

class Op
{
    
    public :
        int cal(int a,int b)
        {
            return a+b;
        }
    public:
        double cal(double a,double b)
        {
            return a*b;
        }
        
    
    
};


int main()
{
    
    Op o = Op();
    
    cout<<o.cal(3,2)<<endl;
    cout<<o.cal(4.0,5.0)<<endl;
    
    
    
    return 0;
}
