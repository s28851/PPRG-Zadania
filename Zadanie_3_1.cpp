#include <iostream>
using namespace std;

int main()
{
    float a , b;
    cout << "Program obliczający sumę, różnicę, iloczyn i iloraz dwóch liczb. Wprowadzane liczby są typy float."
        <<endl << "Dokładność wyświetlania wyników jest ogniczona do dwóch miejsc po przecinku. " <<endl
        << ":) zamiast przecinka używaj tu kropki! " <<endl;
    cout << "Podaj pierwsza liczbe : ";
    cin >> a;
    cout << "Podaj druga liczbe : ";
    cin >> b;
    cout << endl;
    
    cout << "Pierwsza liczba wynosi : " << a << endl;
    cout << "Druga liczba wynosi :    " << b << endl << endl;
    
    float suma; suma=a+b;
    cout << "         Suma =  ";     printf("%.2f", suma); cout << endl;
    float roznica; roznica=a-b;
    cout << "      Roznica =  ";  printf("%.2f", roznica); cout << endl;
    float iloczyn; iloczyn=a*b;
    cout << "      Iloczyn =  ";  printf("%.2f", iloczyn); cout << endl;
    float iloraz; iloraz=a/b;
    cout << "Dzielenie a\\/b =  ";   printf("%.2f", iloraz); cout << endl;

    return 0;
}
