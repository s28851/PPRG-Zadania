
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Program sprawdzajacy czy liczba jest parzysta\n";
    cout << "Podaj liczbe do sprawdzenia\n";
    cin >> a;
    cout << "Podales liczbe " << a << endl << endl;

    if (a == 0) { cout << "Liczba " << a << " jest rowna zero\n"; }
    else if (a %2 != 0) { cout << "Liczba " << a << " jest nieparzysta\n"; }
    else { cout << "Liczba " << a << " jest przysta\n"; }

    return 0;
}
