#include <iostream>
using namespace std;

int main(){
    int x = 10;

    while (x <= 20) {
        if (x % 2 == 0) {
            int y = 6 * x + 3;
            cout << "Dla x = " << x << ", y = " << y << endl;
        }
        x++;
    }

    return 0;
}


