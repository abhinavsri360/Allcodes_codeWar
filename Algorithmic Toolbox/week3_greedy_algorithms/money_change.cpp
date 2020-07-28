#include <iostream>
using namespace std;

int get_change(int m) {
  int n=0,temp=0;
  while(m){
  	if(m>9){
  		temp=m/10;
  		m-=temp*10;
      n+=temp;
  	}
  	else if(m>4){
      temp=m/5;
  		n+=temp;
  		m-=temp*5;
  	}
  	else if(m>0){
  		n+=m;
  		m=0;
  	}
  }
  return n;
}

int main() {
  int m;
  cin >> m;
  cout << get_change(m) << endl;
}
