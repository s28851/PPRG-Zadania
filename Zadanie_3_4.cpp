#include <iostream>
#include <iomanip>

using namespace std;

int liczba(int i, int j)
{
    if (j == 1 || j == i)
        return 1;
    else
        return liczba(i - 1, j - 1) + liczba(i - 1, j);
}

int main()
{
    int iloscwierszy;
    cout << "Program drukuje Trojkat Pascala." << endl <<"Podaj liczbę wierszy do wydrukowania w zakresie od 1 do 20 :";
    cin >> iloscwierszy;
    cout << endl << "wiersz" <<endl;
    for (int i = 1; i <= iloscwierszy; i++)
    {
        cout << setw(2) << i << setw (4 * ( iloscwierszy - i)) << "";
        for (int j = 1; j <= i; j++)
            cout << setw(8) << liczba(i, j);
        cout << endl;
    }
    return 0;
}
