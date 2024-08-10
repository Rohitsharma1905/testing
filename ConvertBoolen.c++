
// C++ program to convert 
// truth table for OR operation 
#include <iostream> 
using namespace std; 
  
// Function to convert boolean 
// into string 
string btos(bool x) 
{ 
    if (x) 
        return "True"; 
    return "False"; 
} 
  
// Driver code 
int main() 
{ 
    // Conversion of Truth Table 
    // for OR operation 
    cout << 1 << " || " << 0 << " is " << btos(1 || 0) 
         << endl; 
    cout << 1 << " && " << 0 << " is " << btos(1 && 0) 
         << endl; 
  
    return 0; 
}
