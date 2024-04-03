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
// int main() {
//   int *arr, length;
//   printf("inset size of array : ");
//   scanf("%d", &length);
//   arr = (int *)malloc(length * sizeof(int));
//   insertArray(arr, length);
//   printf("before : \n");
//   displayArr(arr, length);
//   // buble sort
//   for (int i = 0; i < length - 1; i++) {
//     for (int j = 0; j < length - i - 1; j++) {
//       if (arr[j + 1] < arr[j])
//         swap(&arr[j + 1], &arr[j]);
//     }
//   }
//   printf("after: \n");
//   displayArr(arr, length);
//   return 0;
// }
// // selection sort
// int main() {
//   int *arr, length;
//   printf("inset size of array : ");
//   scanf("%d", &length);
//   arr = (int *)malloc(length * sizeof(int));
//   insertArray(arr, length);
//   printf("before : \n");
//   displayArr(arr, length);
//   for (int i = 0; i < length - 1; i++) {
//     int min_index = i;
//     for (int j = i + 1; j < length; j++) {
//       if (arr[min_index] > arr[j])
//         min_index = j;
//     }
//     if (i != min_index)
//       swap(&arr[min_index], &arr[i]);
//   }
//   printf("after: \n");
//   displayArr(arr, length);
//   return 0;
// }
// //  insertion sort
// int main() {
//   int *arr, length, j;
//   printf("inset size of array : ");
//   scanf("%d", &length);
//   arr = (int *)malloc(length * sizeof(int));
//   insertArray(arr, length);
//   printf("before : \n");
//   displayArr(arr, length);
//   for (int i = 1; i < length; i++) {
//     int key = arr[i];
//     j = i - 1;
//     while (j >= 0 && arr[j] > key) {
//       arr[j + 1] = arr[j];
//       j--;
//     }
//     arr[j + 1] = key;
//   }
//   printf("after: \n");
//   displayArr(arr, length);
//   return 0;
// }
// // merge sort
// void merge(int *arr, int l, int m, int r) {
//   int leftLength = m - l + 1;
//   int rightLength = r - m;
//   int rightArr[rightLength];
//   int leftArr[leftLength];
//   int i, j, k;
//   for (i = 0; i < rightLength; i++)
//     rightArr[i] = arr[m + 1 + i];
//   for (i = 0; i < leftLength; i++)
//     leftArr[i] = arr[l + i];
//   k = l;
//   i = 0;
//   j = 0;
//   while (i < leftLength && j < rightLength) {
//     if (leftArr[i] <= rightArr[j]) {
//       arr[k] = leftArr[i];
//       i++;
//     } else {
//       arr[k] = rightArr[j];
//       j++;
//     }
//     k++;
//   }
//   while (i < leftLength) {
//     arr[k] = leftArr[i];
//     i++;
//     k++;
//   }
//   while (j < rightLength) {
//     arr[k] = rightArr[j];
//     j++;
//     k++;
//   }
// }
// void mergeSort(int *arr, int l, int r) {
//   if (l >= r)
//     return;
//   int m = l + (r - l) / 2;
//   mergeSort(arr, l, m);
//   mergeSort(arr, m + 1, r);
//   merge(arr, l, m, r);
// }
// int main() {
//   int *arr, length, j;
//   printf("inset size of array : ");
//   scanf("%d", &length);
//   arr = (int *)malloc(length * sizeof(int));
//   insertArray(arr, length);
//   printf("before : \n");
//   displayArr(arr, length);
//   mergeSort(arr, 0, length - 1);
//   printf("after: \n");
//   displayArr(arr, length);
//   return 0;
// }
// // buble sort
// int main() {
//   int *arr, length;
//   printf("insert size of arr : ");
//   scanf("%d", &length);
//   arr = (int *)malloc(length * sizeof(int));
//   insertArray(arr, length);
//   displayArr(arr, length);
//   for (int i = 0; i < length - 1; i++) {
//     for (int j = 0; j < length - 1 - i; j++) {
//       if (arr[j + 1] < arr[j])
//         swap(&arr[j], &arr[j + 1]);
//     }
//   }
//   displayArr(arr, length);
//   return 0;
// }
// // selection sort
// int main() {
//   int *arr, length;
//   printf("insert size of arr : ");
//   scanf("%d", &length);
//   arr = (int *)malloc(length * sizeof(int));
//   insertArray(arr, length);
//   displayArr(arr, length);
//   for (int i = 0; i < length - 1; i++) {
//     int min_index = i;
//     for (int j = i + 1; j < length; j++) {
//       if (arr[min_index] > arr[j])
//         min_index = j;
//     }
//     if (min_index != i)
//       swap(&arr[min_index], &arr[i]);
//   }
//   displayArr(arr, length);
//   return 0;
// }
// // insertion sort
// int main() {
//   int *arr, length;
//   printf("insert size of arr : ");
//   scanf("%d", &length);
//   arr = (int *)malloc(length * sizeof(int));
//   insertArray(arr, length);
//   displayArr(arr, length);
//   for (int i = 1; i < length; i++) {
//     int key = arr[i];
//     int j = i - 1;
//     while (j >= 0 && arr[j] > key) {
//       arr[j + 1] = arr[j];
//       j--;
//     }
//     arr[j + 1] = key;
//   }
//   displayArr(arr, length);
//   return 0;
// }
// // merge sort
// void merge(int *arr, int l, int m, int r) {
//   int i, j, k, tempLength, *temp;
//   tempLength = r - l + 1;
//   temp = (int *)malloc(sizeof(int) * tempLength);
//   i = l;
//   k = 0;
//   j = m + 1;
//   while (i < m + 1 && j < r + 1) {
//     if (arr[i] <= arr[j]) {
//       temp[k] = arr[i];
//       k++;
//       i++;
//     } else {
//       temp[k] = arr[j];
//       k++;
//       j++;
//     }
//   }
//   while (i < m + 1) {
//     temp[k] = arr[i];
//     i++;
//     k++;
//   }
//   while (j < r + 1) {
//     temp[k] = arr[j];
//     j++;
//     k++;
//   }
//   for (i = l; i <= r; i++) {
//     arr[i] = temp[i - l];
//   }
// }
// void mergeSort(int *arr, int l, int r) {
//   if (l < r) {
//     int m = l + (r - l) / 2;
//     mergeSort(arr, l, m);
//     mergeSort(arr, m + 1, r);
//     merge(arr, l, m, r);
//   }
// }
// int main() {
//   int *arr, length;
//   printf("insert length of arr : ");
//   scanf("%d", &length);
//   arr = (int *)malloc(sizeof(int) * length);
//   insertArray(arr, length);
//   displayArr(arr, length);
//   mergeSort(arr, 0, length - 1);
//   displayArr(arr, length);
//
//   return 0;
// }
// // buble sort
// int main(){
//   int *arr , length ;
//   printf("insert size of arr : ") ;
//   scanf("%d" , &length );
//   arr = (int *)malloc(length * sizeof(int));
//   insertArray(arr, length);
//   displayArr(arr , length);
//   // buble sort
//   for(int i =0 ; i< length-1 ; i++ )
//     for(int j=0 ; j<length - i -1 ; j++)
//       if(arr[j] >arr[j+1]) swap(&arr[j] , &arr[j+1]) ;
//
//   displayArr(arr , length);
//   return 0 ;
// }
// // selection sort
// int main(){
//   int * arr ,length  ;
//   printf("insert size of arr : ") ;
//   scanf("%d" , &length);
//   arr = (int *)malloc(length * sizeof(int));
//   insertArray(arr,  length);
//   displayArr(arr,  length);
//   // selection sort
//   for(int i = 0 ; i<length ; i++ ){
//     int min_index = i ;
//     for(int j = i +1 ; j<length ;j++)
//       if(arr[min_index]>arr[j]) min_index = j ;
//     if(min_index != i) swap(&arr[min_index] , &arr[i]);
//   }
//   displayArr(arr, length);
//   return 0 ;
// }
// // insertion sort
// int main(){
//   int *arr , length ;
//   printf("insert size arr : ");
//   scanf("%d",&length);
//   arr= (int * )malloc(length* sizeof(int));
//   insertArray(arr,  length);
//   displayArr(arr,  length);
//   // inseration sort
//   for(int i =1 ; i<length ; i++ ) {
//     int j =i-1 ;
//     int key = arr[i];
//     while(j>0 && key<arr[j]){
//       arr[j+1] = arr[j];
//       j-- ;
//     }
//     arr[j+1] = key ;
//   }
//   displayArr(arr,length);
//   return 0 ;
// }
void merge(int *arr, int l, int m, int r) {
  int right_length, left_length, i, j, k;
  left_length = l - m + 1;
  right_length = r - m;
  int arrLeft[left_length];
  int arrRight[right_length];
  for (i = 0; i < left_length; i++)
    arrLeft[i] = arr[l + i];
  for (i = 0; i < right_length; i++)
    arrRight[i] = arr[m + 1 + i];
  i = 0;
  j = 0;
  k = l;
  while (i < left_length && j < right_length) {
    if (arrLeft[i] <= arrRight[j]) {
      arr[k] = arrLeft[i];
      i++;
    } else {
      arr[k] = arrRight[j];
      j++;
    }
    k++;
  }
  while (i < left_length) {
    arr[k] = arrLeft[i];
    i++;
    k++;
  }
  while (j < right_length) {
    arr[k] = arrRight[j];
    j++;
    k++;
  }
}
void mergeSort(int *arr, int l, int r) {
  if (l >= r)
    return;
  int m = l + (r - l) / 2;
  mergeSort(arr, l, m);
  mergeSort(arr, m + 1, r);
  merge(arr, l, m, r);
}
int main() {
  int *arr, length;
  printf("insert size of arr : ");
  scanf("%d", &length);
  arr = (int *)malloc(length * sizeof(int));
  insertArray(arr, length);
  displayArr(arr, length);
  mergeSort(arr, 0, length - 1);
  displayArr(arr, length);
  return 0;
}
