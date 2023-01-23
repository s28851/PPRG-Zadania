#include <iostream>
using namespace std;

int main(){

    int a=0;
    
    cout << "Podaj liczbe calkowita od 1 do 30 okreslajaca ilosc elementow tablicy:" << endl;
    cin >> a;
    cout << endl;
    int tabl[a];
    
    cout<<"Podaj kolejno " << a <<" liczb calkowitych, po kazdej nacisnij ENTER:";
    
    cout << endl;
    int b;
    for (int i=0;i<a;i++){
        cin >> b;
        tabl[i]=b;
    }
    
    if (a==1) {
        cout <<"Podales tylko jedna liczbe " << tabl[0] <<endl;
    }
    else {
        
        int czestosc;
        int najwczestosc=0;
        
        for (int i=0;i<a;i++){
            
            // ustalamy najwieksza czestosc
            czestosc=0;
            
            for(int j=0;j<a;j++){
                if (tabl[i]==tabl[j]) {czestosc++;} 
            }
            
            if (czestosc>najwczestosc) najwczestosc=czestosc;
        }
        
        // tworzymy tabele najczesciej wystepujacych liczb
        
        int najczliczby[a];
        int iloscliczb=0;
        bool czyjest;
        
        for (int i=0;i<a;i++){
            
            czestosc=0;
            
            for(int j=0;j<a;j++){
                if (tabl[i]==tabl[j]) {czestosc++;} 
            }
            
            if (czestosc==najwczestosc){
                
                czyjest=false;
                
                for (int k=0;k<iloscliczb;k++){
                    
                    if (tabl[i]==najczliczby[k]) czyjest=true;
                }
                
                if (czyjest==false){
                    
                        najczliczby[iloscliczb]=tabl[i];
                        iloscliczb++;
                }
            }
        }
        
        cout <<endl << najwczestosc<< " razy wystąpiły nastepujace liczby:" << endl;
        
        for (int i=0;i<iloscliczb;i++){
            
            cout << najczliczby[i]; 
            
            if (i<(iloscliczb-1)) { 
                cout << " i "; 
            }
            
        }   
        cout <<endl << endl;
    }
    cout <<"Koniec programu. Dziękuję :)" <<endl;
    return 0;
}
