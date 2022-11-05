#include <iostream>
using namespace std;

int main()
{
    float a , b;
    cout << "Podaj pierwsza liczbe : ";
    cin >> a;
    cout << "Podaj druga liczbe : ";
    cin >> b;
    cout << endl;

    cout << "Suma =  ";
    printf("%.2f", a+b); cout << endl;
    cout << "Roznica =  ";
    printf("%.2f", a-b); cout << endl;
    cout << "Iloczyn =  ";
    printf("%.2f", a*b); cout << endl;
    cout << "Dzielenie a\\b =  ";
    printf("%.2f", a/b); cout << endl;

    return 0;
}
