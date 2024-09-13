#include<iostream>
using namespace std;


void rysujKwadrat(int bok) {
    for (int i = 0; i < bok; i++) {
        for (int j = 0; j < bok; j++) {
            cout << "* ";
        }
        cout << "" << endl;
    }
}

void rysujProstokat(int szerokosc, int wysokosc) {
    for (int i = 0; i < wysokosc; i++) {
        for (int j = 0; j < szerokosc; j++) {
            cout << "* ";
        }
        cout << "" << endl;
    }
}

void rysujTrojkatProstokatny(int wysokosc) {
    for (int i = 1; i <= wysokosc; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << "" << endl;
    }
}

void rysujTrojkatRownoboczny(int wysokosc) {
    for (int i = 1; i <= wysokosc; i++) {
        for (int j = 1; j <= wysokosc - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << "" << endl;
    }
}

int main() {
    int x;
    int y;
    int wybor;
    cout << "Menu:" << endl;
    cout << "1. Kwadrat" << endl;
    cout << "2. Prostokat" << endl;
    cout << "3. Trojkat prostokatny" << endl;
    cout << "4. Trojkat rownoboczny" << endl;
    cout << "Wybierz figure (1-4): " << endl;

    cout << "" << endl;

    cin >> wybor;

    cout << "" << endl;

  
if( wybor <= 4){
    cout << "podaj x ktore bedzie wyokoscia figury" << endl;
    cin >> x;
        cout << "" << endl;
}

if( wybor == 2){

    cout << "podaj y ktore bedzie szerokoscia figury" << endl;
    cin >> y;
        cout << "" << endl;

}
    


    switch (wybor) {
        case 1:
            rysujKwadrat(x); 
            break;
        case 2:
            rysujProstokat(y, x); 
            break;
        case 3:
            rysujTrojkatProstokatny(x); 
            break;
        case 4:
            rysujTrojkatRownoboczny(x); 
            break;
        default:
            cout << "Nieprawidlowa liczba wyboru" << endl;
            break;
    }

    return 0;
}