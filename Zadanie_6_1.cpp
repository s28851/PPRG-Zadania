#include<iostream>
using namespace std;
/*
bool przez_trzy(int x){
    if (x%3==0) return true;
    else return false;
}
*/

int main()
{
    int a=0;
    int ilosc=0;
    cout <<"Zadanie 6.1"<<endl<<"Program sprawdzi w zakresie liczb naturalnych od zera do podanej przez użytkownika liczby ile występuje liczb podzielnych prze 5 i które nie są podzielne przez 3."
    <<endl<<endl; 
    while(a<=0){
        cout <<"Podaj liczbę naturalną górnego zakresu sprawdzania :";
        cin >>a;
    }
    for(int i=0;i<=a;i+5){
        if (i%5==0 && i%3!=0) {ilosc++;
            
        } 
    }
    cout <<"W zakresie liczb od 0 do "<< a <<endl<<" jest "<< ilosc<< " liczb podzielnych przez 5 i które nie są podzielne przez 3."
    <<endl<<endl;
    
    
    cout <<endl<<endl <<"Koniec programu. MD :)";
    return 0;
}
