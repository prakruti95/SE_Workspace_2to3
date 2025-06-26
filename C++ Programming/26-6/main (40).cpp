#include<iostream>
using namespace std;

class Clg
{
    public:
        string name;
        static string college;
        
    Clg(string name)
    {
        this->name = name;  
    }
    
    void display()
    {
        cout<<name<<" "<<college<<endl;
    }
    
    static void change()
    {
        college="VVP";
    }
};
string Clg::college = "";
int main()
{
    Clg c1 = Clg("shubham");
    Clg c2 = Clg("gaurang");
   
    Clg::change();
   
    c1.display();
    c2.display();
    
    
        
    return 0;
}