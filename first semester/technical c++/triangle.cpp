#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "enter 3 angles";
    cin >> a >> b >> c;
    if (a > 0 && b > 0 && c > 0 && a + b + c == 180)
        cout << "Valid triangle";
    else
        cout << "Invalid triangle";
    return 0;
}