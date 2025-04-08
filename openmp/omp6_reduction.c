#include <stdio.h>
#include <omp.h>
#define N 1000

int main(){
	int i, sum = 0;

	#pragma omp parallel for reduction(+:sum)
	for(i=1; i<=N; i++){
		sum += i;
	}

	printf("%d\n", sum);

	return 0;
}

