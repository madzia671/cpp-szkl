#include <iostream>
using namespace std;

int x;
int y;
float wynik;
int dzialanie;

int main() {
  cout << "Podaj pierwsza liczbe: " << endl;
  cin >> x;
  cout << "Podaj druga liczbe: " << endl;
  cin >> y;

  cout << "1. dodawanie:" << endl;
  cout << "2. odejmowanie" << endl;
  cout << "3. mnozenie" << endl;
  cout << "4. dzielenie" << endl;
  cout << "5. dzielenie z reszta" << endl;

  cout << "Wybierz zadanie do wykonania: " << endl;
  cin >> dzialanie;


if(dzialanie == 1){
  wynik = x + y;
}
else{
  if (dzialanie == 2){
    wynik = x - y;
    } else{
      if (dzialanie == 3){
    wynik = x * y;}
    else{
      if (dzialanie == 4){
            wynik = x / y;
            } else{
              wynik = x % y;
            }
    }

    }

}


  cout << "Wynik twojego zapytania to: " << wynik << endl;

  return 0;
}