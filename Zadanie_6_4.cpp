#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    int b;
    string c;
    
    cout<<"Program tworzący wielokrotną konakenację ciągu podanego przez użytkownika"<<endl<<endl<<"Podaj ciąg znaków: ";
    cin >> a;
    cout << "Podaj liczbę powtózeń tekstu: ";
    cin >> b;
    
    for (int i=0;i<b;i++){
        c=c+a;
    }
     cout << c;
     
     cout <<endl << "To już jest koniec... :) MD";

    return 0;
}
