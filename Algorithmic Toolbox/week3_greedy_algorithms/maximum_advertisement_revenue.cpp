#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;


long long max_dot_product(vector<int> a, vector<int> b) {

  int at,bt;
  int n=a.size();
  long long result = 0;

  //cout<<"reached"<<endl;
  while(n--){
    at=max_element(a.begin(), a.end()) - a.begin();
    bt=max_element(b.begin(), b.end()) - b.begin();

    result += ((long long) a[at]) * b[bt];
    a[at]=INT_MIN;
    b[bt]=INT_MIN;
  }

  /*for (size_t i = 0; i < a.size(); i++) {
    result += ((long long) a[i]) * b[i];
  }*/
  return result;
}

int main() {
  size_t n;
  cin>>n;
  
  vector<int> a(n), b(n);
  for (size_t i = 0; i < n; i++) {
    cin>>a.at(i);
  }
  for (size_t i = 0; i < n; i++) {
    cin>>b.at(i);
  }

  cout<<max_dot_product(a,b)<<endl;

  return 0;
}
