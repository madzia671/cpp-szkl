#include <iostream>
#include <cstdlib>
#include <time.h>
#include <ctime>

using namespace std;


bool czyDoskonala(){
    
srand(time(NULL));
int los = rand()%+100;
cout << "Liczba ktora zostala wylosowana z przedzialu 0-100 to: " << los << endl; 
int licz = 0;

    for(int i = 1; i <= los; i++){
        if(los % i == 0){
            licz++;
        }
    }
        
        
    if(licz == 2){
        return true;
    } else{
        return false;
    }

    
}

int main(){

if (czyDoskonala() == true){
    cout << " wylosowana liczba jest liczba doskonala" << endl;
} else {
    cout << " wylosowana liczba nie jest liczba doskonala" << endl;


}


}