#include <iostream>

using namespace std;


int silnia(int n){

int wynik = 1;

for(int i = 1; i <= n; i++){
wynik = wynik * i;

}
return wynik;

}

int sildw(int n){

int wynik = 1;

for (int i = 2; i <= n; i += 2){
    if( n % 2 != 0){
        wynik = wynik * n;
    }


}

return wynik;


}


int main(){

    int n;

    cout << "podaj n: "<< endl;
    cin >> n;

    cout << "silnia: " << silnia(n) << endl;

    cout << "silnia podwojna: " << sildw(n) << endl;
}