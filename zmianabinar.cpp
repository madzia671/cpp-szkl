#include <iostream>
using namespace std;


int main() {
    int i;
    int tab[8];
    int x;

    cout << "Podaj liczbe naturalna (0-255)" << endl;
    cin >> x;

    while (x){
        tab[i++] = x % 2;
        x /= 2;

    }

    for (int a = i - 1; a >= 0; a--)
    cout << tab[a];


    }