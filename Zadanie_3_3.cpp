#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c;
    cout <<"Rownanie kwadratowe ma postac ax^2 + bx + c = 0"<<endl;
    
    cout << "Podaj a : ";
    cin >> a;
    cout << "Podaj b : ";
    cin >> b;
    cout << "Podaj c : ";
    cin >> c;
    
    cout <<endl << "Twoje rownanie ma postac: "  <<endl;
    cout <<a << "x^2 + " <<b << "x + "<<c <<" = 0" <<endl;
    
    double delta;
    delta=(b*b)-(4*a*c);
    cout << "Delta wynosi: "<<delta <<endl;
    
    if (delta<0){
        cout << "Rownanie nie ma pierwiastkow.";
            return 0;
    }
    else if (delta == 0){
        cout << "Rownanie ma jeden pierwiastek" << endl << "X0=";
        double x0;
        x0=(-b/(2*a));
        cout <<x0;
        return 0;
    }
    else if (delta > 0){
        cout << "Rownanie ma dwa pierwiastki" << endl << "X1=";
        double x1;
        double sdelta;
        sdelta=sqrt(delta);
        x1=(-b-sdelta)/(2*a);
        cout <<x1<<endl;
        cout << "X2=";
        double x2;
        x2=(-b+sdelta)/(2*a);
        cout <<x2<<endl;
        return 0;
    }
            
    }
