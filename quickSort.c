#include <stdio.h>
#include <stdlib.h>
int partition(int *arr, int l, int r) {
  int i, j, temp, pivot;
  j = l - 1;
  pivot = arr[r];
  for (i = l; i < r + 1; i++) {
    if (arr[i] < pivot) {
      j++;
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }
  arr[r] = arr[j + 1];
  arr[j + 1] = pivot;
  return j + 1;
}
void quickSort(int *arr, int l, int r) {
  if (l < r) {
    int pivotIndex = partition(arr, l, r);
    quickSort(arr, l, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, r);
  }
}
void insertArray(int *arr, int length) {
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
  int *arr, length;
  printf("insert the size of arr : ");
  scanf("%d", &length);
  arr = (int *)malloc(length * sizeof(int));
  insertArray(arr, length);
  printArr(arr, length);
  quickSort(arr, 0, length);
  printArr(arr, length);
  return 0;
}
