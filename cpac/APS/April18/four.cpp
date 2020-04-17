#include<stdio.h>

int isPossible(int N,int D,int *weight){
	if(!N)
		return !D;
  	return isPossible(N-1,D+weight[N-1],weight)||isPossible(N-1,D-weight[N-1],weight)||isPossible(N-1,D,weight);
}

main(){
	int N;
	scanf("%d",&N);
	int weights[N],i,D;
	for(i=0;i<N ;i++){
		scanf("%d",weights+i);
	}
	scanf("%d",&D);
	if(isPossible(N,D,weights))
		puts("YES");
	else
		puts("NO");
	return 0;
}