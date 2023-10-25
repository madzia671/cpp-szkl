#include <iostream>
using namespace std;


int main(){

int nr;
int rok;


cout << "podaj numer miesiaca, np 1 to styczeń: " << endl;
cin >> nr;



switch (nr) {

case 1: cout << "Styczen ma 31 dni";
break;
case 2: cout << "podaj rok: ";
cin >> rok;

if (rok%4 == 0 && rok%100 != 100 || rok %400 == 0){
    cout << "Luty w roku przestepnym ma 29 dni";
}
else{
    cout << "Luty w roku nieprzestepnym ma 28 dni";
}
break;
case 3: cout << "Marzec ma 31 dni";
break;
case 4: cout << "Kwiecien ma 30 dni";
break;
case 5: cout << "Maj ma 31 dni";
break;
case 6: cout << "Czerwiec ma 30 dni";
break;
case 7: cout << "Lipiec ma 31 dni";
break;
case 8: cout << "Sierpien ma 31 dni";
break;
case 9: cout << "Wrzesien ma 30 dni";
break;
case 10: cout << "Pazdziernik ma 31 dni";
break;
case 11: cout << "Listopad ma 30 dni";
break;
case 12: cout << "Grudzien ma 31 dni";
break;
default: cout << "Niepoprawny nr miesiaca";
}


}