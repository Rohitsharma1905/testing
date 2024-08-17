/*
 * C++ Program to Demonstrate Use of Formatting Flags on Float Output
 */
#include <iostream>
using namespace std;
 
int main()
{
    float data;
    ios_base::fmtflags old;    
 
    cout << "Enter a float value :\t";
    cin >> data;
    old = cout.flags();
    cout.setf(ios_base::scientific, ios_base::floatfield);
    cout << "\nScientific format :\t" << data << endl;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Fixed-point format :\t" << data << endl;
    cout.setf(ios_base::fmtflags(0), ios_base::floatfield);
    cout << "Default format :\t" << data << endl;
}
