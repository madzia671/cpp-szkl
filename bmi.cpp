#include <iostream>

using namespace std;

int main(){
    float bmi;
    float wzrost;
    float waga;

    cout << "podaj swoj wzrost w m" << endl;
    cin >> wzrost;

    cout << "podaj swoja wage w kg" << endl;
    cin >> waga;

    cout << "twoje bmi wynosi:" << bmi << endl;

bmi = waga / wzrost * wzrost;

if (bmi < 18.5){
    cout << "masz niedowagę";
}
else if (bmi >= 18.5 && bmi <= 25){
cout << "Twoja waga jest prawidłowa";
}
else {
    cout << "masz nadwage";
}

return 0;




}