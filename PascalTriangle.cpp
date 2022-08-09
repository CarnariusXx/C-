#include <iostream>

using namespace std;

int number(int i)
{
    return i > 0 ? (int)log10((double)i) + 1 : 1;
}

void Printer(int n)
{
    for (int i = 0; i < n; ++i)
    {
        auto x = 1;
        cout << string((n - i - 1) * (n / 2), ' ');

        for (int j = 0; j <= i; ++j)
        {
            auto y = x;
            x = x * (i - j) / (j + 1);
            auto maxlen = number(x) - 1;
            cout << y << string(n - 1 - maxlen - n%2, ' ');
        }
        cout << endl;
    }
}
int main()
{
    Printer(10);
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
