#include <iostream>

using namespace std;
int main()
{
    int limit = 0;
    int sum = 0;

    cout << "Enter last of integer: ";
    cin >> limit;
    
    for (int i = 0; i < limit; ++i)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            sum += 0;
        }
        cout << "Sum: " << sum << endl;
    }
}
