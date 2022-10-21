
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Program szukajacy najwiekszej z trzech liczb calkowitych\n";
    cout << "P trzy liczby calkowite do sprawdzenia\n";
    cout << "Podaj pierwsza liczbe :\n";
    cin >> a;
    cout << "Podaj druga liczbe :\n";
    cin >> b;
    cout << "Podaj trzecia liczbe :\n";
    cin >> c;
    cout << "Podales liczby " << a << " i " << b << " i " << c << endl << endl;

    cout << "Pierwszy sposob\n";
    int naj;
    if (a > b) {naj = a;} 
    else {naj = b; }
    if (naj < c) { naj = c; }
    { cout << "Najwieksza liczba to " << naj << endl << endl; }

    cout << "Drugi sposob\n";
    if (a >= b && a >= c) { cout << "Najwieksza liczba to " << a << endl << endl; }
    else if (b >= a && b >= c) { cout << "Najwieksza liczba to " << b << endl << endl; }
    else { cout << "Najwieksza liczba to " << c << endl << endl; }

    int naj2;
    cout << "Trzeci sposob\n";
    naj2 = max(a, b);
    naj2 = max(naj2, c);
    cout << "Najwieksza liczba to " << naj2 << endl << endl << endl << endl;

    return 0;
}
