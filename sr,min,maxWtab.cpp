#include <iostream>
#include <cmath>
#include <cstdlib>
#include<ctime>

using namespace std;



int main(){

    srand(time(NULL));
    int n = 100;
     int tab[n];

     for(int i = 0; i < n; i++){
        tab[i] = rand() %1000;
     }
     
     
     int max = 0;
     int min = 1001;
     for (int i = 0; i < n; i++){
         cout << tab[i] << endl;
         if (max < tab[i]){
             max = tab[i];
         }

         if (min > tab[i]){
             min = tab[i];
             }
     }

int licznik = 0;
int srednia;

    for(int i = 0; i < n; i++ ) {
        licznik += tab[i];
    }
    
    srednia = licznik / n;

float srharm=0;
float mianownik = 0;

  for(int i = 0; i < n; i++ ) {
        mianownik += 1.0 / tab[i];
    }

    srharm = n / mianownik;


cout << "najwieksza liczba jest liczba: " << max << endl;

cout << "najmniejsza liczba jest liczba: " << min << endl;

cout << "srednia tablicy wynosi: " << srednia << endl;

cout << "srednia harmoniczna tablicy wynosi: " << srharm << endl;


}