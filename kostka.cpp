#include <iostream>
#include <cstdlib>
#include <time.h>
#include <ctime>

using namespace std;

int main(){

int los = 0;
int ilosc = 0;

srand(time(NULL));

while( los != 6){

los = rand()%6+1;
cout << "Liczba ktora wylosowala kostka to: " << los << endl;
ilosc ++;
}

cout << ilosc << endl;

}