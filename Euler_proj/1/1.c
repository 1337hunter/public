#include <stdio.h>
#include <unistd.h>


int main(){

	int N;
	scanf("%d", &N);

	int n = N/3 + N/5 + 10;
	int arr[n];
	int i;
	int c;
	int sum;
	i = 	0;
	c = 	0;
	sum =	0;
	while(i < N){
		if ((i % 3 == 0) || (i % 5 == 0)){
		arr[c] = i;
		c++;
		}
		i++;
	}
	
	i = 0;
	while(i < c){
	sum += arr[i];
	i++;
	}
	printf("Cуммa кратных 3 или 5: %d \n", sum);
	return (0);

}	
















