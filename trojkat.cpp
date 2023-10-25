#include <iostream>

using namespace std;
//a+b>c i a+c>b i c+b>a
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

    if( a + b > c && a + c > b && c + b > a){
        cout << "boki tworza trojkat";}
        if (a * a + b * b == c*c){
            cout << "trojkat jest prostokatny";
        }
        else {
            cout << "trojkat nie jest prostokatny";
        }
    
    //else if (){
       // cout << "trojkat jest prostokatny";
   // }
   // else if (przyprostokatna1 + przyprostokatna2 > przeciwprostokatna){
        //cout << "trojkat jest prostokatny";
    //}else {
        //cout << "trojkat nie jest prostokatny";
    //}

    return 0;


}