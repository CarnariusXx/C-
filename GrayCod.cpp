#include <iostream>
#include <bitset>

using namespace std;

/* if[b-1] = 1 -> g[i] = ! b[i]
else g[i] = b[i]
==
g = b xor */

int encode(int number)
{
	return number ^ (number >> 1);
}

int decode(int number)
{
	for (int bit = 1U << 31; bit > 1; bit >>= 1)
	{
		if (number & bit) number ^= bit >>= 1;
	}
	return number;
}

string to_bianry(int value, int digits)
{
	return bitset<32>(value).to_string().substr(32 - digits, digits);
}
int main()
{
	cout << "Value\tBinary Value\tGray Code\tDecode Value\n";
	cout << "-----\t------------\t---------\t------------\n";

	for (int i = 0; i < 32; ++i)
	{
		auto enc = encode(i);
		auto dec = decode(enc);

		cout << i << "\t" << to_bianry(i, 5) << "\t\t" << to_bianry(enc, 5) << "\t\t" << dec << "\n";
	}
}
