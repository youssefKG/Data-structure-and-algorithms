#include <stdio.h>
#include <stdlib.h>
void insetArray(int *arr, int length) {
  for (int i = 0; i < length; i++) {
    printf("T[%d] : ", i);
    scanf("%d", &arr[i]);
  }
  printf("\n");
}
void swap(int *val1, int *val2) {
  int temp = *val1;
  *val1 = *val2;
  *val2 = temp;
}
void printArray(int *arr, int length) {
  for (int i = 0; i < length; i++)
    printf("| %d", arr[i]);
  printf("|\n");
}
int partition(int *arr, int left, int right) {
  int pivot = arr[right];
  int i = (left - 1);
  for (int j = left; j <= right; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[right]);
  return i + 1;
}
void quickSort(int *arr, int left, int right) {
  if (left < right) {
    int pivotIndex = partition(arr, left, right);
    quickSort(arr, left, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, right);
  }
}
int binarySearch(int *arr, int l, int r, int val) {
  int mid = (r - l) / 2;
  if (arr[mid] > val) {
    return binarySearch(arr, l, mid, val);
  } else if (arr[mid] < val)
    return binarySearch(arr, mid + 1, r, val);
  else if (arr[mid] == val)
    return mid;
  else
    return -1;
}
int main() {
  int *arr, length, val;
  printf("enter size of arr :");
  scanf("%d", &length);
  arr = (int *)malloc(length * sizeof(int));
  insetArray(arr, length);
  printArray(arr, length);
  // quicksort
  quickSort(arr, 0, length - 1);
  // print arr
  printArray(arr, length);
  printf("val = ");
  scanf("%d", &val);
  // binarySearch
  int indexOfVal = binarySearch(arr, 0, length - 1, val);
  printf("the index is %d and value id %d", indexOfVal, arr[indexOfVal]);
  return 0;
}
