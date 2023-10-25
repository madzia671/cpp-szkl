#include <iostream>
using namespace std;

int main(){

    int a;
    int b;
    int nr;
    int wyn;

cout << "dzialania beda wykonywane w kolejnosci a i b" << endl;

    cout << "podaj pierwsza liczbe: " << endl;
    cin >> a;

    cout << "podaj druga liczbe: " << endl;
    cin >> b;

  cout << "1. dodawanie" << endl;
  cout << "2. odejmowanie" << endl;
  cout << "3. mnozenie" << endl;
  cout << "4. dzielenie" << endl;
  cout << "5. reszta z dzielenia" << endl;


    cout << "Wybierz nr dzialania ktore chcesz wykonac: " << endl;
    cin >> nr;


    switch (nr) {
case 1: wyn = a + b;
cout << "wynik dodawania to: " << wyn << endl;
break;

case 2: wyn = a - b;
cout << "wynik odejmowania to: " << wyn << endl;
break;

case 3: wyn = a * b;
cout << "wynik mnozenia to: " << wyn << endl;
break;

case 4: wyn = a / b;
cout << "wynik dzielenia to: " << wyn << endl;
break;

case 5: wyn = a % b;
cout << "reszta z dzielenia: " << wyn << endl;
break;

default: cout << "Nie ma wiecej dzialan w ofercie";
}


}