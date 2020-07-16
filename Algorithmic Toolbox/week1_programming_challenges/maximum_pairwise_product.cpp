#include<bits/stdc++.h>
#include<vector>
using namespace std;

long long maxpairwiseprod(const vector<int>& v){
	int s=v.size();
	long long max1=0,max2=0;
	int ind1=-1;
	for(int i=0;i<s;i++){
		if(v[i]>max1){
			max1=v[i];
			ind1=i;
		}
	}
	for(int i=0;i<s;i++){
		if(v[i]>max2 && ind1!=i)
			max2=v[i];
	}
	return max1*max2;
}

int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	cout<<maxpairwiseprod(v)<<endl;
	return 0;
}