#include <stdio.h>
#include <stdlib.h>
void insertArray(int *arr, int length) {
  for (int i = 0; i < length; i++) {
    printf("T[%d] : ", i);
    scanf("%d", &arr[i]);
  }
}
void displayArr(int *arr, int length) {
  for (int i = 0; i < length; i++)
    printf("| %d ", arr[i]);
  printf("|\n");
}
void swap(int *num1, int *num2) {
  int temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}
void merge(int *arr, int m, int l, int r) {
  int i, j, k;
  int left_length = m - l + 1;
  int right_length = r - m;
  int left_arr[left_length];
  int right_arr[right_length];
  for (i = 0; i < left_length; i++) {
    left_arr[i] = arr[l + i];
  }
  for (i = 0; i < right_length; i++) {
    right_arr[i] = arr[m + 1 + i];
  }
  k = l;
  i = j = 0;

  while (i < left_length && j < right_length) {
    if (left_arr[i] <= right_arr[j]) {
      arr[k] = left_arr[i];
      i++;
    } else {
      arr[k] = right_arr[j];
      j++;
    }
    k++;
  }
  while (i < left_length) {
    arr[k] = left_arr[i];
    i++;
    k++;
  }
  while (j < right_length) {
    arr[k] = right_arr[j];
    j++;
    k++;
  }
}
void mergeSort(int *arr, int l, int r) {
  if (l < r) {
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, m, l, r);
  }
}
int main() {
  int *arr, length;
  printf("size of array : ");
  scanf("%d", &length);
  arr = (int *)malloc(sizeof(int) * length);
  insertArray(arr, length);
  displayArr(arr, length);
  mergeSort(arr, 0, length - 1);
  displayArr(arr, length);
  return 0;
}
