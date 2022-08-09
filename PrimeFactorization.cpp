#include <iostream>
#include <vector>
using namespace std;

vector<long int> prime_factors(long int n)
{
    vector<long int>factors;
    do
    {
        factors.push_back(2);
        n = n / 2;
    } while (n % 2 == 0);

    for (int i = 3; i <= sqrt(n); i += 2)
    {
        do
        {
            factors.push_back(i);
            n = n / i;
        } while (n % i == 0);
    }
    if (n > 2)
        factors.push_back(n);
    return factors;
}

int main()
{
    long int number;
    cin >> number;
    auto factors = prime_factors(number);
    copy(begin(factors), end(factors), ostream_iterator<double>(cout, " "));
}