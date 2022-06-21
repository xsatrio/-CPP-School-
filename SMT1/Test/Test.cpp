#include <iostream>
using namespace std;

int main(){
  int b;
  cout << "Input b: "; cin >> b;
  switch (b)
  {
  case 1:
  case 2: b = b + 2; break;
  case 3: b = 2*b; break;
  case 4: b++; break;
  default: b--;
  }
  cout << b;
  cout << endl;
  return 0;
}
