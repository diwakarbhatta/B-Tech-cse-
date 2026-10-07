#include <iostream>
using namespace std;

int main()
{
    float a, b;
    char op;
    cout << "enter 2 no.";
    cin >> a >> b;
    cout << "enter operator (+,-,*,/):";
    cin >> op;
    switch (op)
    {
        case '+':
            cout << "Result=" << a + b;
            break;
        case '-':
            cout << "Result=" << a - b;
            break;
        case '*':
            cout << "Result=" << a * b;
            break;
        case '/':
            cout << "Result=" << a / b;
            break;
                    cout << "Invalid operator";
    }
    return 0;
}