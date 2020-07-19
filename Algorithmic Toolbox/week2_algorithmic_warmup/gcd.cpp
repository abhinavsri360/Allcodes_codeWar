#include <iostream>
using namespace std;

int gcd_fast(int a, int b) {
  if(b==0)
    return a;
  else if(a>b)
    return gcd_fast(b,a%b);
  else
    return gcd_fast(a,b%a);
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << gcd_fast(a, b) << endl;
  return 0;
}
