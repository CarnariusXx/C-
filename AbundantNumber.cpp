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
	for (int a = 10; a <= limit; ++a)
	{
		auto sum = SumOfDiv(a);
		if (sum > a)
		{
			cout << a << " ,Abundant = " << sum - a << endl;
		}
	}
}

int main()
{
	int limit;
	cin >> limit;
	Print(limit);
}
