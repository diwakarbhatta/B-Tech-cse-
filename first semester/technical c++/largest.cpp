#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two no.";
    cin >> a >> b;
    if (a > b)
        cout << "Largest = " << a;
    else
        cout << "Smallest" << b;
    return 0;
}