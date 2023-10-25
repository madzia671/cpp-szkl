#include <iostream>
//#include <conio.h>
//#include <math.h>

using namespace std;

float pole (float r){
        float s = 3.14 * r * r ;
        return s;
     }

     float obw(float r){
        float l = 6.28 * r ;
        return l;
     }


int main(){

    float promien;
    //short int suma;
     //int pole;
     //int obw;

     



     cout << "podaj promien kola" << endl;
    cin >> promien;

    cout << "pole kola o podanym promieniu to:" << pole(promien) << endl;
cout << "obwod kola o podanym promieniu to:" << obw(promien) << endl;
      
}