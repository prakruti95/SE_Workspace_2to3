#include<iostream>
using namespace std;

struct Rectangle
{
    int width,height;
};

int main()
{
    
    struct Rectangle rec;
    int ans;
    
    cout<<"Enter Your Width: "<<endl;
    cin>>rec.width;
    
    cout<<"Enter Your Height: "<<endl;
    cin>>rec.height;
    
    ans = rec.width*rec.height;
    
    cout<<"Area of Rectangle is : "<<ans<<endl;
    
    
    
    
    return 0;
}