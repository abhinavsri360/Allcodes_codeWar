#include <bits/stdc++.h>
#include <vector>
using namespace std;

double get_optimal_value(double capacity, vector<double> weights, vector<double> values, vector<double> fraction) {
  double value = 0.0;
  double i,acquired;

  while(capacity){
    i=max_element(fraction.begin(), fraction.end()) - fraction.begin();
    acquired=min(weights[i],capacity);
    value+=fraction[i]*acquired;
    weights[i]-=acquired;
    capacity-=acquired;
    fraction[i]=0;
  }

  return value;
}

int main() {
  double capacity,n;
  cin >> n >> capacity;
  vector<double> values(n);
  vector<double> weights(n);
  vector<double> fraction(n);
  for (double i = 0; i < n; i++) {
    cin >> values[i] >> weights[i];
    fraction[i]=values[i]/weights[i];
  }

  //sort(fraction.begin(),fraction.end(),greater<double>());
  if(n == 1 && capacity>weights[0])
    printf("%0.4f", values[0]);
  else
    printf("%0.4f", get_optimal_value(capacity, weights, values, fraction)); 

  //cout << get_optimal_value(capacity, weights, values, fraction) << setprecision(4);
  return 0;
}
/*
3 50
60 20
100 50
120 30

1 10
500 30
*/