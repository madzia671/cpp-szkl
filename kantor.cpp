#include <iostream>
using namespace std;

//bool kupsp;
float euro;
float x;
float funt;



int main() {
  cout << "Waluta   Kupno   Sprzedaz" << endl;
  cout << "GBP      4,74    4,84" << endl;
  cout << "EUR      4,27    4,35" << endl;
  cout << "USD      3,69    3,77" << endl;

  //cout << "Chcesz kupic czy sprzedac?" << endl;

 cout << "Ile masz zl?" << endl;
cin >> x;

funt = x / 4.84;
euro = x * 4.27;

  cout << "Za " << x << " zl mozesz kupic " << funt << " funtow." << endl;
  cout << "Sprzedajac " << x << " euro otrzymasz " << euro << " zl." << endl;

  return 0;
}