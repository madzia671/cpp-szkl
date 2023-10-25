#include <iostream>
using namespace std;

float funt;
float euro;

int main() {
  cout << "Waluta   Kupno   Sprzedaz" << endl;
  cout << "GBP      4,74    4,84" << endl;
  cout << "EUR      4,27    4,35" << endl;
  cout << "USD      3,69    3,77" << endl;



  funt = 100 / 4.84;
  euro = 657 * 4.27;
  cout << "Za 100 zl mozesz kupic " << funt << " funtow." << endl;
  cout << "Sprzedajac 657 euro otrzymasz " << euro << " zl." << endl;

  return 0;
}