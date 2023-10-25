#include <iostream>

using namespace std;

int main(){
    int rok;

    cout << "podaj rok: ";
    cin >> rok;
if (rok%4 == 0 && rok%100 != 100 || rok %400 == 0){
cout << "Rok ", rok, " jest rokiem przestepnym";}

else{
    cout << "Rok ", rok, " nie jest rokiem przestepnym";}

    return 0;
}
