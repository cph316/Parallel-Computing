#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>
#define N 16
int main(){
   	int i;
   	int temp;
   	int A[N], B[N], AA[N], BB[N];

   	for(i=0; i<N; i++){
		A[i] = rand() % 256;
		B[i] = rand() % 256;
		AA[i] = A[i];
		BB[i] = B[i];
   	}
	for(i=0; i<N; i++){
		temp = A[i];
		A[i] = B[i];
		B[i] = temp;
   	}

   	#pragma omp parallel for private(temp)
   	for(i=0; i<N; i++){
		temp = AA[i];
		AA[i] = BB[i];
		BB[i] = temp;
   	}

   	for(i=0; i<N; i++){
		if(A[i] != AA[i] || B[i]!=BB[i])
			break;
   	}	

   	if(i==N)
		printf("Test pass!!!\n");
   	else	
		printf("Test failure\n");
   	return 0;
}
