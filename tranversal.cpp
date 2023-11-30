// C++ program to traversal in an array
#include <iostream>
using namespace std;
 
// Driver Code
int main()
{
    // Initialise array
    int arr[] = { 1, 2, 3, 4 };
 
    // size of array
    int N = sizeof(arr) / sizeof(arr[0]);
 
    // Traverse the element of arr[]
    for (int i = 0; i < N; i++) {
 
        // Print the element
        cout << arr[i] << ' ';
    }
 
    return 0;
}
