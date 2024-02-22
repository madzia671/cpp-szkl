#include <iostream>
#include <cmath>

using namespace std;

float delta (float a, float b, float c){
    float del = (b * b) - (4 * a * c);
    return del;
}


int main(){

float a;
float b;
float c;

cout << "podaj a" << endl;
cin >> a;

cout << "podaj b" << endl;
cin >> b;

cout << "podaj c" << endl;
cin >> c;




if(a == 0){
cout << "Nie można obliczyć delty" << endl;
}
else{
    if ( delta(a,b,c) > 0){
        cout << "ma 2 mijesca zerowe " << ((-1) * b - sqrt(delta(a,b,c))) / (2 * a) <<"oraz "<< ((-1) *  b + sqrt(delta(a,b,c))) / (2 * a) << endl;
    }
    else{
        if( delta(a,b,c) == 0){
            cout << "ma 1 miejsce zerowe " << (-1) * b / (2 * a)<< endl;
        }
        else{
            if( delta(a,b,c) < 0 )
            cout << "brak miejsc zerowych " << endl ;
        }
    }

}
}