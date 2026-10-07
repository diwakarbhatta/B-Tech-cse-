#include <iostream>
using namespace std;

int main()
{
    float a;
    cin>> a;
    if(a>=1000)
    a=a-(a*0.1);
    cout<<a;
}