#include<iostream>
using namespace std;
class A
{
   protected:
   int val;
   
   public:
  void set_values (int a)
  { 
		val=a;
  }
   
};
class B :public A
{
   public:
    int cube()
	{
		return (val*val*val);
	}
};

int main()
{
    int num;
    
    cout<<"Enter Any Value";
    cin>>num;
    
    B b1 = B();
    b1.set_values(num);
    cout<<b1.cube();
  
    return 0;
}