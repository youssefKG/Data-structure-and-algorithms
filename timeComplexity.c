#include <stdio.h>
#include <stdlib.h>
// int main() {
//   int a = 0;                    // O(1)
//   int N = 10;                   // O(1)
//   for (int i = 0; i < N; i++) { // O(n)
//     for (int j = N; j > i; j--) { // j = n , j =n-1 = , j=n-3 .... (n+1)(n)/2
//       a = a + i + j; // O(n²) ;
//     }
//   }
//   return 0; // O(n²)
//   }
int main() {
  int n = 30;                            // O(1)
  int k = 0;                             // O(1)
  for (int i = n / 2; i <= n; i++) {     // O(n/2) O(n)
    for (int j = 2; j <= n; j = j * 2) { // j = 2 , j= 2*2 , j=2²*2.....
      k = k + n / 2;
    }
  }
  return 0;
}
