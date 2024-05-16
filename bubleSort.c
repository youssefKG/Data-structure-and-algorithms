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
  int *arr;
  int length;
  printf("insert the size of array : ");
  scanf("%d", &length);
  arr = (int *)malloc(length * sizeof(int));
  insertArray(arr, length);
  printf("before : \n");
  displayArr(arr, length);
  // buble sort
  // [23 ,1 ,67 ,3 , 2, 0]

  for (int i = 0; i < length - 1; i++) {
    for (int j = 0; j < length - i - 1; j++)
      if (arr[j] > arr[j + 1])
        swap(&arr[j], &arr[j + 1]);
  }
  printf("after : \n");
  displayArr(arr, length);
  return 0;
}
