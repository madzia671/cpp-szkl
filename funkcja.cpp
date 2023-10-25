#include <iostream>

using namespace std;

float kwadrat (float a, float b, float c, float x){
        float kw = a * x * x + b * x + c;
        return kw;
     }

     float liniowa(float a, float b, float x){
        float l = a * x + b ;
        return l;
     }

int main(){
    float a;
    float b;
    float c;
    float x;
    float l;
    float kw;

    cout << "podaj a" << endl;
    cin >> a;

    cout << "podaj b" << endl;
    cin >> b;

    cout << "podaj c" << endl;
    cin >> c;

    cout << "podaj x" << endl;
    cin >> x;

    if(a == 0){
        cout << "Funkcja jest liniowa:" << liniowa(a,b,x) << endl;
    }
    else {
        cout << "Funkcja jest kwadratowa:" << kwadrat(a,b,c,x) << endl;
    }

    
}