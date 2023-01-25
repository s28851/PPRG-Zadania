#include<iostream>


using namespace std;

void drukuj_tablice(int tabl[][2],int a){
    for (int i=0;i<a;i++){
        cout << tabl[i][0]<<"   "<<tabl[i][1]<<endl;
    }
    return;
}

void zamiana(int tabl[][2],int a){
    int c; // zmienna tymczasowa
    for (int i=0;i<a;i++){
        c=tabl[i][0]; 
        tabl[i][0]=tabl[i][1];
        tabl[i][1]=c;
    }
    return;
}

int main()
{
    int a; // ilość wierszy tablicy
    cout << "Zadanie 5.2" << endl
        << "Program tworzący tablicę dwuwymiarową liczb całkowitych."  << endl
        << "Program umożliwia wprowadzenie ilości rzędów tablicy i wprowadzenie kolejno elementów." <<endl
        << "Program zamienia miejscami liczby z kolumn lewej i prawej. " <<endl <<endl
        << "Podaj liczbę wierszy tablicy: " ;
        
    cin >> a;
    int b[a][2]; // tworzymy tabelę dwuwymiarową o ilości rzędów a
    for (int i=0;i<a;i++){
        cout << "Rząd " << i+1 <<" z "<<a <<". Podaj liczbę do lewej kolumny: ";
        cin >> b[i][0];
        cout << "Rząd " << i+1 <<" z "<<a <<". Podaj liczbę do prawej kolumny: ";
        cin >> b[i][1];
    }
    cout << endl <<endl; drukuj_tablice(b,a);
    cout <<endl<<endl
    << "Zamiana kolumn miejscami...."<<endl<<endl;
    
    zamiana(b,a);
    drukuj_tablice(b,a);
    
    cout <<endl<<endl <<"Koniec programu. MD :)";
    return 0;
}
