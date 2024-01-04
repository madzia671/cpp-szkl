#include <iostream>

using namespace std;


void dzielniki(int n){

      for (int dz = 1; dz <= n; ++dz) {
            if (n % dz == 0) {
                cout << dz << " ,";
            }
        }
}

void iloscdziel(int n){
int il = 0;
        for (int dz = 1; dz <= n; ++dz) {
            if (n % dz == 0) {
                il++;
            }
        }
        cout << il;
}

bool czyPierwsza(int n) {
    if (n < 2) {
        return false;
    }

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

bool czyDoskonala(int n) {
    int sumaDzielnikow = 1;

    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            sumaDzielnikow += i;
        }
    }

    return sumaDzielnikow == n;
}


int main(){

    int n;

    cout << "podaj n: " << endl;
    cin >> n;

    cout << "|liczba |" << "   "<<"dzielniki |" << "   "<<"liczbaDzielnikow |" << "   " << "czyPierwsza |" << "   " << "czyDoskonala |" << endl;

    cout << "|  " << n << "|   " ;

    dzielniki(n);

    cout << "  | ";

    iloscdziel(n);

    cout << "   |";


    cout << (czyPierwsza(n) ? "tak " : "nie ");

    cout << "   |";


    cout << (czyDoskonala(n) ? "tak " : "nie ");

    return 0;

}