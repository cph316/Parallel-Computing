#include<omp.h>
#include<stdio.h>
int main(int argc,char* argv[])
{
    #pragma omp parallel
   {
    printf("Thread %d Hello World \n",omp_get_thread_num());
    }
}

