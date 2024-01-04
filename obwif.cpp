#include <iostream>
#include <cmath>

using namespace std;

//kwadrat
float kwadratobw(float a) {
    float obwkw = a + a + a + a;
    return obwkw;
}

float kwadratpol(float a) {
    float pkw = a * a;
    return pkw;
}
//prostokat
float prostobw(float a, float b) {
    float pobw = a + b + a + b;
    return pobw;
}

float prostpol(float a, float b) {
    float pp = a * b;
    return pp;
}
//trojkat
float trojkatpol(float a, float h) {
    float trp = 0.5 * a * h;
    return trp;
}

float trojkatobw(float a, float b, float c) {
    float trobw = a + b + c;
    return trobw;
}
//romb
float rombpol(float a, float h) {
    float rp = a * h;
    return rp;
}

float rombobw(float a) {
    float robw = a * 4;
    return robw;
}

//trapez

float trapezp(float a, float b, float h) {
    float trap = 0.5 * (a + b) * h;
    return trap;
}

float trapezobw(float a, float b, float x, float y) {
    float trapobw = a + b + x + y;
    return trapobw;
}

//kolo

float kolopol(float r) {
    float kolp = 3.14 * r * r;
    return kolp;
}

float koloobw(float r) {
    float kobw = 6.28 * r;
    return kobw;
}






int main() {
    float a;
    float b;
    float c;
    float y;
    float x;
    float r;
    float obwkw;
    float pkw;
    float h;
    float trap;
    float trapobw;
    float pobw;
    float pp;
    float kolp;
    float kobw;
    float trp;
    float trobw;
    float rp;
    float robw;
    int odp;


    cout << "1. kwadrat" << endl;

    cout << "2. prostokat" << endl;

    cout << "3. trojkat" << endl;

    cout << "4. romb" << endl;

    cout << "5. trapez" << endl;

    cout << "6. kolo" << endl;


    cout << "wybierz nr figury na jakiej chcesz obliczyc obwod i pole: " << endl;
    cin >> odp;
    
    system("CLS");


    switch (odp) {
    case 1:
        cout << "podaj bok kwadratu: " << endl;
        cin >> a;
        system("CLS");
        if (a <= 0) {
            cout << "podaj dodatnia liczbe" << endl;
        }
        else {
            cout << "pole kwadratu o podanym boku to: " << kwadratpol(a) << endl;
            cout << "obwod kwadratu o podanym boku to: " << kwadratobw(a) << endl;

        }

        break;

    case 2:
        cout << "podaj bok a: " << endl;
        cin >> a;

        cout << "podaj b: " << endl;
        cin >> b;

        if (a && b <= 0) {
            cout << "podaj dodatnia liczbe" << endl;
        }
        else {



            cout << "pole prostokatu o podanym boku to: " << prostpol(a, b) << endl;
            cout << "obwod prostokatu o podanym boku to: " << prostobw(a, b) << endl;
        }
        break;

    case 3:
        cout << "podaj a: " << endl;
        cin >> a;

        cout << "podaj b: " << endl;
        cin >> b;

        cout << "podaj c: " << endl;
        cin >> c;

        cout << "podaj h: " << endl;
        cin >> h;

        if (a && b && c && h <= 0) {
            cout << "podaj dodatnia liczbe" << endl;
        }
        else {



            cout << "pole trojkatu o podanych wymiarach to: " << trojkatpol(a, h) << endl;
            cout << "obwod trojkatu o podanych wymiarach to: " << trojkatobw(a, b, c) << endl;
        }
        break;

    case 4:

        cout << "podaj bok a: " << endl;
        cin >> a;

        cout << "podaj h: " << endl;
        cin >> h;

        if (a && h <= 0) {
            cout << "podaj dodatnia liczbe" << endl;
        }
        else {

            cout << "pole romb o podanych wymiarach to: " << rombpol(a, h) << endl;
            cout << "obwod romb o podanych wymiarach too: " << rombobw(a) << endl;
        }
        break;

    case 5:

        cout << "podaj a: " << endl;
        cin >> a;

        cout << "podaj b: " << endl;
        cin >> b;

        cout << "podaj h: " << endl;
        cin >> h;

        cout << "podaj x: " << endl;
        cin >> x;

        cout << "podaj y: " << endl;
        cin >> y;

        if (a && b && h && x && y <= 0) {
            cout << "podaj dodatnia liczbe" << endl;
        }
        else {
            cout << "pole trapezu o podanych wymiarach to: " << trapezp(a, b, h) << endl;
            cout << "obwod trapezu o podanych wymiarach to: " << trapezobw(a, b, x, y) << endl;
        }

        
        break;

    case 6:

        cout << "podaj promien kola: " << endl;
        cin >> r;

        if (r <= 0) {
            cout << "podaj dodatnia liczbe" << endl;
        }
        else {
            cout << "pole kola o podanym promieniu to: " << kolopol(r) << endl;
            cout << "obwod kola o podanym promieniu to: " << koloobw(r) << endl;

        }

        
        break;
    default:
        cout << "zla liczba, wybierz liczbe 1-6" << endl;
    }
    return 0;


}
