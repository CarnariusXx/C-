#include <iostream>
#include <numeric>
using namespace std;

void GCD()
{
    int a, b;
    cout << "Insert first value: ";
    cin >> a;
    cout << "Insert second value: ";
    cin >> b;
    cout << gcd(a, b)<<endl;
}

void LCM()
{
    int a, b;
    cout << "Insert first value: ";
    cin >> a;
    cout << "Insert second value: ";
    cin >> b;
    cout << lcm(a, b)<<endl;
}

int main()
{
    GCD();
    LCM();
}