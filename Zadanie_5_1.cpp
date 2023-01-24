#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> wektor;
    int a; // liczba elementów wektora
    int b; // zmienna wprowadzana liczba
    int l_max; // największa liczba
    int i_max; // index największego elementu
    cout << "Zadanie 5.1" << endl
        << "Program tworzący wektor o okleślonej liczbie elementów przez użytkownika."  << endl
        << "Program podaje wartość maksymalnego elementu wektora i numer jego indexu" <<endl
        << "Podaj liczbę elementów wektora: " ;
        
    cin >> a;
    
    for(int i=0;i<a;i++){
        cout << "Podaj element "<< i+1<<" z " << a << " : "; 
        cin >> b;
        if (i==0||b>l_max) {
            l_max=b;
            i_max=i;
        }
        wektor.push_back(b);
    }
    
    cout << endl << "Sposób najprostszy to zapamiętywanie wartości i indexu największej liczby już przy wprowadzaniu :)"
    << endl << "Największa liczba to : " << l_max << endl << "Index największej liczby to : " << i_max << endl
    << "Rozmiar wektora :" << wektor.size()<< endl<< endl;
    
    
    cout << endl << "Drugi sposób to przeszukanie iteracyjne wektora."<< endl ;
    for(int i=0;i<a;i++){
        
        if (i==0||wektor[i]>l_max) {
            l_max=wektor[i];
            i_max=i;
        }
    }
    cout << "Największa liczba to : " << l_max << endl << "Index największej liczby to : " << i_max << endl
    << "Rozmiar wektora :" << wektor.size()<< endl<< endl;
    
    
    cout << endl << "Trzeci sposób to kasowanie vektora i zapamiętywanie największej liczby i jej indexu."<< endl;
        for(int i=0;!wektor.empty();i++){
        
        if (i==0||wektor[0]>l_max) {
            l_max=wektor[0];
            i_max=i;
        }
        wektor.erase(wektor.begin());
    }
    cout << "Największa liczba to : " << l_max << endl << "Index największej liczby to : " << i_max << endl
    << "Rozmiar wektora :" << wektor.size()<< endl<< endl;
    
    cout <<endl<<endl <<"MD :)";
    return 0;
}
