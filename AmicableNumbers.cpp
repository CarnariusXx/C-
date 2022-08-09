#include <iostream>

using namespace std;

int SumOfDiv(int a)
{
	int result = 1;

	for (int i = 2; i <= sqrt(a); ++i)
	{
		if (a % i == 0)
		{
			result += (i == (a / i)) ? i : (i + a / i);
		}
	}
	return result;
}

void Print(int limit)
{
	for (int number = 4; number < limit; ++number)
	{
		auto sum1 = SumOfDiv(number);
		if (sum1 < limit)
		{
			auto sum2 = SumOfDiv(sum1);
			if (sum2 == number != sum1)
			{
				cout << number << "," << sum1 << endl;
			}
		}
	}
}
int main()
{
	int limit;
	cin >> limit;
	Print(limit);
}