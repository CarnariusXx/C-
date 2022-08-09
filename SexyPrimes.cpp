#include <iostream>

using namespace std;

bool IsPrime(int a)
{
    bool IsPrime = true;
    if (a == 0 || a == 1) {
        IsPrime = false;
    }

    for (int i = 2; i <= a / 2; ++i) {
        if (a % i == 0) {
            IsPrime = false;
            break;
        }
    }
    return IsPrime;
}

int main()
{
    int a,b;
    cin >> a;
    do {
        a = a - 1;
    } while (IsPrime(a) == false);
    if (IsPrime(a + 6))
     {
        b = a + 6;
     }
    cout <<"A: " << a<<" "<< "B: " << b;
}