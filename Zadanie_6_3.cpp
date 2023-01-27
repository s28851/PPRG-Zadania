#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;


struct student{
    int index;
    string imie;
    string nazwisko;
};

bool warunek(const student &a,const student &b){
        return a.index<b.index;
    }

int main()
{
    cout<<"Program tworzący wektor z podanymi danymi studentów i następnie sortujący go według numeru indexu."<<endl<<endl<<"Oto stworzony wektor:"<<endl<<endl;
    
    vector<student> grupa={{72165,"Leo","Kowal"},{783,"Maciej","Demp"},{260000,"Alicja","Kolecka"},{15,"Katarzyna","Szczaw"}};
    
    for(const auto& a : grupa){
    cout << a.index<<" "<<a.imie<<" "<<a.nazwisko<<endl;
    }
    
    cout<<endl<<"Teraz sortuję wektor...."<<endl<<endl;
    
    
    
    sort (grupa.begin(),grupa.end(),warunek);
    
    cout <<"Oto posortowany wektor:"<<endl<<endl;
    
    for(const auto& a : grupa){
    cout << a.index<<" "<<a.imie<<" "<<a.nazwisko<<endl;
    }
    
    cout<<endl <<"**********************"<<endl<<"Koniec programu. :) MD"<<endl<<"**********************";
    

    return 0;
}
