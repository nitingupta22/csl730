#include<stdio.h>
#include"omp.h"
#define N 20
int main(){
  int i;
#pragma omp parallel for default(none) \
  private(i) 
  for(i=0; i<N; i++) {
    sleep(1);
  printf("%d\n",omp_get_thread_num());
  }
  

}

