#include<iostream>
using namespace std;

class Parent 
{  
    
protected:
    int id_protected;

};


class Child : public Parent
{
    public:
    void setId(int id) 
    {
        
      
        id_protected = id;
        
    }
    
    int getId() 
    {
        return id_protected;
    }
};

int main() 
{
    Child obj1;
    
    obj1.setId(81);
    cout << "ID: " << obj1.getId();
    return 0;
}