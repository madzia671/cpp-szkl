#include <iostream>


using namespace std;

bool czy (int a, int b, int c){
    if( a * a + b * b == c * c)
    return true;
    return false;
}


int main()
{
    int n;
    int a;
    int b;
    int c;

    cout << "podaj liczbe n ktora bedzie koncem przedzialu (musi byc to liczba calkowita)" << endl;
    cin >> n;

    for (int a = 1; a <= n; a++){
        for (int b = a; b <= n; b++){
            for (int c = 1; c <= n; c++){
                if(czy (a,b,c)){
                    cout << a << " " << b << " " << c << "\n";
                } 
            }
        }
    }

}
