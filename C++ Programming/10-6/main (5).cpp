#include<iostream>
using namespace std;

class Student
{
    public:
    int add(int a,int b)
    {
       return a+b; 
    }
    public:
    int sub(int a,int b)
    {
       return a-b; 
    }
    public:
    int mul(int a,int b)
    {
       return a*b; 
    }
    public:
    int div1(int a,int b)
    {
       return a/b; 
    }
   
};


int main()
{
    
    int a,b;
    
    cout<<"Enter Value for a: ";
    cin>>a;
    
    cout<<"Enter Value for b: ";
    cin>>b;
    
    Student s1 = Student();
    cout<<"Addition is : "<<s1.add(a,b)<<endl;
    
    Student s2 = Student();
    cout<<"Substraction is : "<<s2.sub(a,b)<<endl;
    
    Student s3 = Student();
    cout<<"Multiplication is : "<<s3.mul(a,b)<<endl;
    
    Student s4 = Student();
    cout<<"Division is : "<<s4.div1(a,b)<<endl;
    
    
    
    
    return 0;
}