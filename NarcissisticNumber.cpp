﻿#include <iostream>

using namespace std;

double Triple(double x)
{
    return x * x * x;
}

void NN()
{
    for (int a = 1; a <= 9; ++a)
    {
        for (int b = 0; b <= 9; b++)
        {
            for (int c = 0; c <= 9; ++c)
            {
                auto abc = a * 100 + b * 10 + c;
                auto arm = Triple(a) + Triple(b) + Triple(c);
                if (abc == arm)
                {
                    cout << arm << endl;
                }
            }
        }
    }
}

int main()
{
    NN();
}