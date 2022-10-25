#include<iostream>
using namespace std;

int main()
{
    int n;            // liczba ilosci cykli szeregu
    int suma_czesci;  // suma czesci szeregu
    int suma_calosci; // suma calego szeregu

    do {
        cout << "Podaj liczbê od 1 do 40 dla obliczenia szeregu wed³ug poni¿szego wzoru " << endl
            << "(1)+(1+2)+(1+2+3)+(1+2+3+4)+....(1+2+3+4+...+n) " << endl
            << "Podaj liczbe : ";
        cin >> n;
        if (n < 1 || n>40)
        {
            cout << "!!!!! Podales liczbe spoza zakresu 1-40 !!!!!!!!!! " ; return 0;
        }
    } while (n<1 && n>40);


    cout << endl << "Podales liczbe : " << n << endl << endl;
    
    // Obliczanie poszczzegolnych czesci
    
    for (int i=1; i <= n; i++)
    {
        suma_czesci = 0;
        for (int j=1; j <= i; j++)
        {
            cout << j;
            suma_czesci += j;
            if (j < i) {
                cout << "+";
            }
        }
        cout << "=" << suma_czesci << endl;
    }
    
    cout << endl ;
    suma_czesci=0;
    
    //Obliczanie sumy calosci
    
    for (int i=1; i <= n; i++)
    {
        suma_czesci = 0;
        for (int j=1; j <= i; j++)
        {
            suma_czesci += j;
        }
        cout << suma_czesci;
        if (i < n) {
            cout << "+";}
        suma_calosci += suma_czesci;
    }
    
    cout << "=" << suma_calosci;
    cout << endl <<endl <<"MD :) ";
    
    return 0;
}
