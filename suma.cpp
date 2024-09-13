#include <iostream>
using namespace std;

int main(){

int suma;
int liczba;

for (int liczba = 0; liczba <= 100; liczba++) {
        if (liczba % 25 == 0) {
            cout << liczba << endl;
            suma += liczba;
        }
    }
    cout << "Suma liczb podzielnych przez 25: " << suma << endl;

    return 0;

}