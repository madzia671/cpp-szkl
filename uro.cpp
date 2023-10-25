#include <iostream>
using namespace std;

const int osb = 31; //31 uczniow, jasio nie je ale je wychowawczyni
const int cukierki = 70;
int jasio;

int main() {
  jasio = cukierki % osb; //zakladajac ze da im po 2 cukierki
  cout << "Liczba  cukierkow ktore zostanie jasiowi:" << jasio << endl;

  return 0;
}