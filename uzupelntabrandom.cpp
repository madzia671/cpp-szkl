#include <iostream>
using namespace std;

int main(){
     
     
     srand(time(NULL));
     int tab[10];

     for(int i = 0; i < 10; i++){
        tab[i] = rand() %100;
     }
     
     
     int najwieksza = 0;
     for (int i = 0; i < 10; i++){
         cout << tab[i] << ", ";
         if (tab[i] > najwieksza){
             najwieksza = tab[i];
         }
     }


cout << "najwieksza liczba jest liczba: " << najwieksza;



}