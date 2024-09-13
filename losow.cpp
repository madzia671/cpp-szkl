#include<iostream>
#include <cstdlib>
#include <time.h>
#include <ctime>
using namespace std;

int main(){

int los = rand()%10+1;
int proba;

srand(time(NULL));


do{
     cout << "sprobuj trafic liczbe ktora kryje sie w przedziale 1-10" << endl;
    cin >> proba;

if (proba < los){
    cout << "twoja liczba jest mniejsza od ukrytej liczby" << endl;
} else{
    if(proba > los){
        cout << "twoja liczba jest wieksza od ukrytej liczby" << endl;
    } else{
        cout << "brawo! trafiles ukryta liczbe ktora byla: " << los << endl;
    }
}
} while ( proba != los);

return 0;


}