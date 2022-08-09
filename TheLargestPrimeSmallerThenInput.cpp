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
    int a;
    cin >> a;
    do {
        a = a - 1;
     } while (IsPrime(a) == false);
    cout << a;
}