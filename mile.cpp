#include <iostream>
using namespace std;

const float x = 1852;
float mile;
float metry;

int main() {
  cout << "Podaj odleglosc w milach" << endl;
  cin >> mile;
  metry = mile / x;
  cout << "Tyle wynosi odleglosc ktora podales w metrach " << metry << endl;

  return 0;
}