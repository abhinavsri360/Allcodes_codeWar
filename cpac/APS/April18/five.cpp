#include<stdio.h>
#include<stdlib.h>
main(){
int N;
scanf("%d",&N);
int *arr=0,*best=0;
if(N){
    arr=(int *)malloc(sizeof(int)*N);
    best=(int *)malloc(sizeof(int)*N);
}

int longest_length=0,i,j;
for(i=0;i< N;i++)
   scanf("%d",arr+i);
for(i=0;i< N;i++){
	best[i] = 1;
	for(j=0;j< i;j++){
		if(arr[i]> arr[j])
			best[i] = (best[i]>(best[j]+1))?best[i]:(best[j]+1);

	}
	if(longest_length<best[i])
		  longest_length = best[i];
	
}
printf("%d\n",longest_length);
return 0;	
}