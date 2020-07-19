#include <iostream>
using namespace std;

int get_fibonacci_last_digit_fast(int n) {
    int arr[n+1];
    arr[0]=0;
    arr[1]=1;

    for(int i=2;i<n+1;i++)
        arr[i]=(arr[i-1]%10 + arr[i-2]%10)%10;
    return arr[n]%10;
}

int main() {
    int n;
    cin >> n;
    int c = get_fibonacci_last_digit_fast(n);
    cout << c << '\n';
}
