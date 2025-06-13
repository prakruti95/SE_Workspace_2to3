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
        int cal(int a,int b,int c)
        {
            return a*b*c;
        }
        
    
    
};


int main()
{
    
    Op o = Op();
    
    cout<<o.cal(3,2)<<endl;
    cout<<o.cal(4,5)<<endl;
    
    
    
    return 0;
}
