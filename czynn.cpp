#include <iostream>

using namespace std;




void rozklad (int n){
    //rozkład liczby na czynniki pierwsze
    int k = 2;
        while( n > 1)
        {
                while(n % k == 0) 
                {
                        cout << k << " " ;
                        n /= k;
                }
                k++;
        }

}


int main(){
    int czynn;
    int n;
    int k = 2;
    
cout << "podaj liczbe" << endl;
cin >> n;
//n to koniec przedzialu

      cout << "liczba \t Czynniki pierwsze liczby " << n << ": ";
for(int i = 2; i <= n; i++){
    cout << i <<"\t";
    rozklad(i);
    cout << endl;

} 
        
        return 0;

}