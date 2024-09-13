#include <iostream>
using namespace std;

int main(){
    int x = 0;

     do {
        int y = 3 * x * x + 4 * x + 1;
        cout << "Dla x = " << x << ", y = " << y << endl;
        x++;
    } while (x <= 20);

    return 0;
}