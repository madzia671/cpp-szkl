#include <iostream>
#include <cmath>

using namespace std;

int main(){

//0,1,2
    int const n = 10;
    int tablica[n]; //rozmiar tablicy
    
    for (int i = 0; i < n; i++){
        tablica[i] = i;
    }

    cout << "tablica wypelniajaca liczba indeksu: "<< endl;


    for (int i = 0; i < n; i++){
        cout << tablica[i] << endl; //tylko wyswietlanie liczby
    }
    cout << " "<< endl; 


//3,6,9
  
    int pom = 3;

    for (int i = 0; i < n; i++){
        tablica[i] = pom;
        pom += 3;
    }

    cout << "tablica iloczynu 3: "<< endl;

    for (int i = 0; i < n; i++){
        cout << tablica[i] << endl;
    }
    cout << " "<< endl;


//2,4,8

    int pierw = 2;

    for(int i = 0; i < n; i++){
        tablica[i] = pierw;
        pierw *= 2;
    }

    cout << "tablica od 2 zwiekszajaca sie o 2: "<< endl;

    for (int i = 0; i < n; i++){ 
        cout << tablica[i] << endl;
    }
    cout << " "<< endl;

        


//10,9,8
    int odejm = 10;

    for(int i = 0; i < n; i++){
        tablica[i] = odejm;
        odejm -= 1;
    }

     cout << "tablica od 10 do 1: "<< endl;

    for (int i = 0; i < n; i++){
        cout << tablica[i] << endl;
    }
    cout << " "<< endl;

}

