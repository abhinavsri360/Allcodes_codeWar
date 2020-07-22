#include <iostream>
using namespace std;

/*long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}*/

long long gcd_fast(long long a, long long b) {
  if(b==0)
    return a;
  else if(a>b)
    return gcd_fast(b,a%b);
  else
    return gcd_fast(a,b%a);
}

int main() {
  long long a, b;
  cin >> a >> b;
  long long c = gcd_fast(a,b);
  cout<< (a*b)/c<<endl;
  return 0;
}
