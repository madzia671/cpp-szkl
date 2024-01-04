#include <iostream>

using namespace std;

int main(){
    int p;
    int k;
    //int pom;

    cout << "podaj liczbe ktora bedzie najmniejsza liczba w przedziale" << endl;
    cin >> p;

    cout << "podaj liczbe ktora bedzie najwieksza liczba w przedziale" << endl;
    cin >> k;

    if ( p > k ){
        //pom = p;
        //p = k;
        //k = pom;
        swap(p, k);
    }


for( int i = p; i <= k; i++ )
{
    cout << i << endl;
}

}