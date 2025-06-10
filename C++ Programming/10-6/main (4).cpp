#include<iostream>
using namespace std;

class Student
{
    public:
    int id1;
   
  
    
   void print()
   {
       cout<<"Your ID is: "<<id1<<endl;
   }
   
   
};


int main()
{
    
    int id;
 
    
    
    cout<<"Enter Your Id"<<endl;
    cin>>id;
    
 
    
    Student s1 = Student();
    s1.id1 = id;
    
    s1.print();//method call
  
    
    
    
    return 0;
}