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
int main() {
  int *arr, length, min_index;
  printf("insert the size of array ");
  scanf("%d", &length);
  arr = (int *)malloc(length * sizeof(int));
  printf("before : \n");
  insertArray(arr, length);
  displayArr(arr, length);
  // selection sort algo
  for (int i = 0; i < length - 1; i++) {
    min_index = i;
    for (int j = i + 1; j < length; j++) {
      if (arr[min_index] > arr[j])
        min_index = j;
    }
    if (min_index != i)
      swap(&arr[i], &arr[min_index]);
  }
  printf("after : \n");
  displayArr(arr, length);
  return 0;
}
