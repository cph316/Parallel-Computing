#include <stdio.h>
#include <omp.h>
#define N 1000

int main(){
	int i, sum = 0;

	#pragma omp parallel for
	for(i=1; i<=N; i++){
		#pragma omp atomic
		sum += i;
	}

	printf("%d\n", sum);

	return 0;
}

