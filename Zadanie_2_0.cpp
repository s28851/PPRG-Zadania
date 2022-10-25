#include<iostream>
using namespace std;

int main()
{
    int a; // ilosc gosci
    int b; // ilosc kawalkow pizzy
    int c; // ilosc kawalkow pizzy dla gosci
    int d; // ilosc kawalkow pizzy dla gospodaza
    
	cout << "Podaj ilosc zaproszonych gosci: ";
    cin >> a;
    cout << "Podaj ilosc kawalkow pizzy: ";
    cin >> b;

    if (a!=0)
    {
        c=b/a;
        d=b%a;
    }

    cout <<endl;

    if (a<0||b<0){cout <<"Podales nieprawidlowa ilosc osob lub ilosc kawalkow pizzy" <<endl<<endl ;}
    else 
    {
        if(a==0 && b==0)
        {
            cout <<"Nie ma gości i nie ma pizzy :(" << endl <<endl;
        }
        else if (a==0)
        {
            cout <<"Gospodaz nie zaprosil gosci. Sam zje kawalki pizzy w ilosci: " <<b <<endl <<endl;;
        }
        
        else if (b==0)
        {
            cout << "Organizator zaprosil na pizze " << a <<" gosci. Razem jest " << a+1 <<" osob." <<endl <<endl;
            cout << "Gospodaz nie zamowil pizzy. Nikt nie zje pizzy. " <<endl <<endl;
        }
        else if (b<a)
        {
            cout << "Gospodaz zamowil za malo pizzy. Goscie nie zjedza pizzy. " <<endl << endl;
            cout << "Organizator zje " << d << " kawalkow pizzy." <<endl << endl;    
        }
        else if (d!=0)
        {
            cout << endl;
            cout << "Organizator zaprosil na pizze " << a <<" gosci. Razem jest "<< a+1 <<" osob." <<endl <<endl;
            cout << "Kawalki pizzy przypadajace na kazdego goscia: " << c <<endl << endl;
            cout << "Ilosc kawalkow pizzy dla organizatora: " << d <<endl << endl;
        }
        else if (d==0)
        {
            cout << endl;
            cout << "Organizator zaprosil na pizze " << a <<" gosci. Razem jest "<< a+1 <<" osob." <<endl <<endl;
            cout << "Kawalki pizzy przypadajace na kazdego goscia: " << c <<endl << endl;
            cout << "Gospodaz pozostanie niestety glodny. Nie zje ani jednego kawalka pizzy :(" <<endl <<endl;
        }
        
        
    }
    cout <<"MD :)";
	return 0;
}