#include <iostream>

using namespace std;

int main(){
    char a;

    cout << "podaj znak" <<  endl;
    cin >> a;
    cout << "podales znak" << a << "o kodzie ASCII" << int(a) << endl;

    if (isdigit(a))//(a >= 48 && a <= 57)
    {
        cout << "podany znak jest cyfra";
    }
    else if (isupper(a)) //(a >= 65 && a <= 90)
    {
    cout << "podany znak jest wielka litera";
    }
    else if (islower(a))
//(a >= 97 && a <= 122)
    {
        cout << "podany znak jest mala litera";
    }
    else {
        cout << "podany znak jest znakiem specjalnym";
    }

     

    return 0;

}