#include <iostream>
using namespace std;

int main()
{
    int n, i, c;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "\n";
    for (i = 1; i <= n; i++)
    {
        for (c = 1; c <= i; c++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
