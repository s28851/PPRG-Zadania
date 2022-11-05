#include <iostream>
using namespace std;

int main()
{
    char a;

    while(a!='t'){
        cin >> a;
        if (a!='t'){
            cout << "podales " << a <<endl;
            continue;
        }
        else{
            return 0;
        }
    }
    
    return 0;
}
