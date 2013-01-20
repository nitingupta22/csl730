#include<stdio.h>
//  for k = 0..n-1
//   Find pivot for column k:
//   i_max = the row with the largest |A[i,k]|, i = k .. n
//   if A[i_max, k] = 0
//     return NULL; // "Singular Matrix "
//   swap rows k and i_max)
//   For all rows below pivot:
//   for i = k+1 .. n-1
//     For all remaining elements in current row
//     for j = k+1 .. n-1
//       A[i,j] = A[i,j] - A[k,j] * (A[i,k]/A[k,k])
//     Fill lower triangular matrix with zeros:
//     A[i,k] = 0

float* gaussElim(float *A, float* B, int n) {
  int k;
  for(k=0; k<n; k++) {
    find_pivot(A,k);
    i_max = max_mod(k,n);
    if(A[i_max][k] == 0) {
      return NULL;
    }
  }
}

int main() {

}
