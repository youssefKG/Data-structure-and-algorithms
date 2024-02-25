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
  int *arr, length, i, j;
  printf("inset the size of array");
  scanf("%d", &length);
  arr = (int *)malloc(length * sizeof(int));
  insertArray(arr, length);
  printf("before :  \n");
  displayArr(arr, length);
  // insetion sort
  for (i = 1; i < length; i++) {
    int temp = arr[i];
    j = i - 1;
    while (j >= 0 && temp < arr[j]) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = temp;
  }
  printf("after : \n ");
  displayArr(arr, length);
}
