#include <iostream>

using namespace std;


int main(){

    int n;
    int a = 0;
    int suma = 0;
    int kon;

    cout << "wprowadz liczbe" << endl;
    cin >> n;

kon = n;

    while (n > 0){
        a = a + n % 10;
        cout << n % 10 << endl;
        n = n / 10;
        suma = suma ++;
    }


    cout << a << endl;

        if(kon % a == 0){
            cout << "podana liczba jest liczba Nivena" << endl;
        }
        else{
            cout << "podana liczba nie jest liczba Nivena" << endl;

        }

    return 0;
}