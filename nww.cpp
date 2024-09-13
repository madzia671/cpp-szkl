#include <iostream>
using namespace std;

int NWD(int a, int b) {
    while (b != 0) {
        int pom = b;
        b = a % b;
        a = pom;
    }
    return a;
}


int NWW(int a, int b) {
    return (a * b) / NWD(a, b);
}


int main(){
    int l1;
    int l2;

    cout << "podaj pierwsza liczbe dla ktorej chcesz znalezc nww:" << endl;
    cin >> l1;

    cout << "podaj druga liczbe dla ktorej chcesz znalezc nww:" << endl;
    cin >> l2;

    // int nwd = NWD(l1, l2);
    // cout << nwd << endl;

    int nww = NWW(l1, l2);

    cout << "nww(" << l1 << "," << l2 << ") = " << nww << endl;

}