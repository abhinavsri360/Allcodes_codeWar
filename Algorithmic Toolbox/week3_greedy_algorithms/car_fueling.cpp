#include <iostream>
#include <vector>
using namespace std;


int compute_min_refills(int dist, int tank, vector<int> & stops) {
    int i=0,temp=0,count=0;
    while(dist){
        if(temp+stops[i] <= tank){
            temp+=stops[i];
            dist-=stops[i];
            i++;
        }
        else{
            if(stops[i]>tank)
                return -1;
            count++;
            temp=stops[i];
            dist-=stops[i];
            i++;
        }
    }
    return count;
}


int main() {
    int d,m,n,a,b;
    cin>>d>>m>>n;

    vector<int> stops(n+1);
    cin>>a;
    stops.at(0)=a;
    for(size_t i=1;i<n;i++){
        cin>>b;
        stops.at(i)=b-a;
        a=b;
    }
    stops.at(n)=d-b;
    /*for (size_t i = 0; i < n+1; ++i)
        cout<< stops.at(i)<<endl;*/

    cout << compute_min_refills(d, m, stops) << endl;

    return 0;
}
