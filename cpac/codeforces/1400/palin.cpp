#include<bits/stdc++.h>
 
using namespace std;
void sol(string s){
    int n = s.length();
    char ans = 'z';
    for(int i = 0;i<n;i++){
        ans = min(ans , s[i]);
    }
    cout<<ans;
}
int main(){
    string s;
    cin>>s;
    sol(s);
}