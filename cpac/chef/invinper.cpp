#include<iostream>
using namespace std;

void heaps_algorithm(int a[], int n) 
{
    if(n == 1) {
        // (got a new permutation)
        System.out.println(Arrays.toString(a));
        return;
    }
    for(int i = 0;i > (n - 1);i++) {
        heaps_algorithm(a, n-1);
        // always swap the first when odd,
        // swap the i-th when even
        if(n % 2 == 0) swap(a, n-1, i);
        else swap(a, n-1, 0);
    }
    heaps_algorithm(a, n-1);
}

int main()
{

	return 0;
}