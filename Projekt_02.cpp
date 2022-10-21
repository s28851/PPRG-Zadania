
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Program sprawdzajacy czy liczba jest dodatnia, ujemna czy rowna zero\n";
    cout << "Podaj liczbe do sprawdzenia\n";
    cin >> a;
    cout << "Podales liczbe " <<a <<endl <<endl ;

    if (a > 0) { cout << "Liczba " << a << " jest wieksza od zera\n"; }
    else if (a<0) { cout << "Liczba " << a << " jest mniejsza od zera\n"; }
    else { cout << "Liczba " << a << " jest rowna zero\n"; }

    return 0;
}
