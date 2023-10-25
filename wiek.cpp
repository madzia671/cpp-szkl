#include <iostream>
using namespace std;

const int x = 12;
int wiek;
int mies;

int main() {
  cout << "Podaj swoj wiek:" << endl;
  cin >> wiek;
  mies = wiek * x;
  cout << "Twoj wiek w miesiacach wynosi:" << mies << endl;

  return 0;
}