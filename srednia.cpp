#include <iostream>
using namespace std;

int main(){
    int liczba;
    int sum = 0;
    int ldziel = 0;
    int srednia;

    do{
        cout << "podaj liczbe: " << endl;
        cin >> liczba;
        sum += liczba;
        ldziel++;

    } while( liczba != 0);
    
    
srednia = sum / ldziel;

cout << "srednia z podanuch liczb to: " << srednia << endl;



}