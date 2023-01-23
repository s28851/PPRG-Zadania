#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    int tabl[10][10];
    
    for (int i=0;i<10;i++){
        tabl[i][0]=i;
    }
    
    for (int i=0;i<10;i++){
        tabl[i][1]=2*i;
    }
    
    for (int i=0;i<10;i++){
        tabl[i][2]=i*i;
    }    
    
    for (int i=0;i<10;i++){
        tabl[i][3]=i+3;
    }
    
    for (int i=0;i<10;i++){
        tabl[i][4]=i-4;
    }
    
    for (int i=0;i<10;i++){
        for (int j=5;j<10;j++){
            tabl[i][j]=0;
        }
    }
    
    cout << "Tabela:" << endl << endl;
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            cout << setw(3) << tabl[i][j];
        }
        cout << endl;
    }
    cout <<endl << endl;
    cout <<"Koniec programu. Dziękuję :)" <<endl;
    return 0;
}
