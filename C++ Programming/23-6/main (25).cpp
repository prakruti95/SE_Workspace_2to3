#include <iostream>
using namespace std;

int main() {
  
  	// Two variables of different type
	int i = 10;
    char c = 'A';
  
  	// printing c after manually converting it
  	cout << (int)c << endl;
  	
  	// Adding i and c,
  	int sum = i + c;
  
  	// Printing sum
  	cout << sum;
  	
    return 0;
}