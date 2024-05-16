#include <stdio.h>
#include <stdlib.h>

void swap(int *item1, int *item2) {
  int temp = *item1;
  *item1 = *item2;
  *item2 = temp;
}

void printArray(int *arr, int length) {
  for (int i = 0; i < length; i++) {
    printf("[%d] :", arr[i]);
  }
}

void insertArray(int *arr, int length) {
  printf("insert the array :\n ");
  for (int i = 0; i < length; i++) {
    printf("T[%d]", i + 1);
    scanf("%d", &arr[i]);
  }
}

void bubleSort(int *arr, int length) {
  int i, j;
  i = j = 0;
  for (int i = 0; i < length - 1; i++) {
    for (int j = 0; j < length - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]);
      }
    }
  }
}

int main() {
  int *arr, length;

  printf("enter the size of array : ");
  scanf("%d", &length);

  while (length <= 0) {
    printf("the size must be greater than 0 : ");
    scanf("%d", &length);
  }

  arr = (int *)malloc(length * sizeof(int));

  insertArray(arr, length); // insert array

  printf("before : ");
  printArray(arr, length); // print the array before the insertion ;

  bubleSort(arr, length); // sort the array using bubble Sort algorithm ;

  printf("\nafter : "); // print the array after the insersation ;
  printArray(arr, length);

  return 0;
}
