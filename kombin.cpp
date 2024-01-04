#include <iostream>

using namespace std;


int silnia(int n){

int wynik = 1;

for(int i = 1; i <= n; i++){
wynik = wynik * i;

}
return wynik;

}
int jeden(int n, int k){
float wynik;

wynik = silnia(n) / silnia(k) * silnia( n - k);

return wynik;

}

int dwa(int n, int k){
float wynik;


wynik = silnia( k + n - 1) / silnia(k) * silnia( n - 1);

return wynik;
}

int trzy(int n, int k){
float wynik;

wynik = silnia(n) / silnia( n - k);

return wynik;
         
}

int cztery(int n, int k){
    float wynik;
    int temp = n;
    for(int i = 1; i < k; i++){
        n = n * temp;
        wynik = n;
    }
    return wynik;
    
}

int main(){

int odp;
int n;
int k;

    cout <<"             MENU               "<< endl;
    cout << "1. kombinacje bez powtórzeń " << endl;
    cout << "2. kombinacja z powtórzeniami" << endl;
    cout << "3. wariacje bez powtórzeń" << endl;
    cout << "4. wariacje z powtórzeniami" << endl;

    cout << "wybierz nr polecenia ktore chcesz wykonac: " << endl;
    cin >> odp;

    cout << "podaj n: " << endl;
    cin >> n;

    cout << "podaj k: " << endl;
    cin >> k;



    switch (odp){
        case 1:
        if( k <= silnia(n)){
            cout << jeden(n, k);

         }else{
            cout << "Wartość k musi być mniejsza bądź równa wartości n!" << endl;
         }
         
         break;

         case 2:
         cout << dwa(n, k);
         break;

         case 3: 
         if( k <= silnia(n)){
            cout << trzy(n, k);
            
         }else{
            cout << "Wartość k musi być mniejsza bądź równa wartości n!" << endl;
         }
         
         break;

         case 4:
         cout << cztery(n, k);
         break;

        
    default:
    cout << "zla liczba, wybierz liczbe 1-4" << endl;
    }
    return 0;

    
}