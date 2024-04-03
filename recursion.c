#include <stdio.h>
#include <stdlib.h>
void printfBinary(int n, int *result) {
  if (n == 0) {
    return;
  }
  int m = n / 2;
  *result = *result * 10 + n % 2;
  printfBinary(m, result);
}
int sumNumbers(int n) {
  if (n <= 1)
    return n;
  return n + sumNumbers(n - 1);
}
int binarySearch(int *arr, int l, int r, int x) {
  if (l >= r)
    return -1;
  int mid = (l + r) / 2;
  if (arr[mid] == x) {
    return mid;
  }
  if (arr[mid] < x) {
    return binarySearch(arr, mid + 1, r, x);
  }
  return binarySearch(arr, l, mid - 1, x);
}
void insertArr(int *arr, int length) {
  for (int i = 0; i < length; i++) {
    printf("T[%d] : ", i);
    scanf("%d", &arr[i]);
  }
}
void printArr(int *arr, int length) {
  for (int i = 0; i < length; i++)
    printf("| %d ", arr[i]);
  printf("|\n");
}
int main() {
  int *arr;
  int length;
  int num;
  printf("insert the length of arr : ");
  scanf("%d", &length);
  printf("insert number : ");
  scanf("%d", &num);
  arr = (int *)malloc(length * sizeof(int));
  insertArr(arr, length);
  printArr(arr, length);
  return 0;
}
