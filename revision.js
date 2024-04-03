let arr = [89, 0, 78, 64, 13, 01, 3, 22];
// // buble sort
// for (let i = 0; i < arr.length - 1; i++) {
//   for (let j = 0; j < arr.length - 1 - i; j++) {
//     if (arr[j] > arr[j + 1]) {
//       let temp = arr[j];
//       arr[j] = arr[j + 1];
//       arr[j + 1] = temp;
//     }
//   }
// }
console.log(arr);
// // selection sort
// for (let i = 0; i < arr.length - 1; i++) {
//   let min_index = i;
//   for (let j = i + 1; j < arr.length; j++) {
//     if (arr[min_index] > arr[j]) min_index = j;
//     if (min_index != i) {
//       let temp = arr[min_index];
//       arr[min_index] = arr[i];
//       arr[i] = temp;
//     }
//   }
// }
// let n = arr.length;
// for (let i = 0; i < n - 1; i++) {
//   for (let j = 0; j < n - 1 - i; j++) {
//     if (arr[j] > arr[j + 1]) {
//       let temp = arr[j];
//       arr[j] = arr[j + 1];
//       arr[j + 1] = temp;
//     }
//   }
// }
// for (let i = 0; j < n - 1; j++) {
//   let min_index = i;
//   for (let j = 0; j < n; j++) {
//     if (arr[min_index] > arr[j]) min_index = j;
//   }
//   if (i != min_index) {
//     let temp = arr[min_index];
//     arr[min_index] = arr[i];
//     temp = temp;
//   }
// }
// for (let i = 1; i < arr.length; i++) {
//   let key = arr[i];
//   let j = i - 1;
//   while (j >= 0 && key < arr[j]) {
//     arr[j + 1] = arr[j];
//     j--;
//   }
//   arr[j + 1] = key;
// }
// // merge sort
// function merge(arr, l, m, r) {
//   let i, j, k;
//   const left_length = m - l + 1;
//   const right_length = r - m;
//   let left_arr = [];
//   let right_arr = [];
//   for (i = 0; i < left_length; i++) left_arr.push(arr[l + i]);
//   for (i = 0; i < right_length; i++) right_arr.push(arr[m + 1 + i]);
//   console.log(left_arr, right_arr);
//   i = 0;
//   j = 0;
//   k = l;
//   while (i < left_length && j < right_length) {
//     if (left_arr[i] <= right_arr[j]) {
//       arr[k] = left_arr[i];
//       i++;
//     } else {
//       arr[k] = right_arr[j];
//       j++;
//     }
//     k++;
//   }
//   while (i < left_length) {
//     arr[k] = left_arr[i];
//     i++;
//     k++;
//   }
//   while (j < right_length) {
//     arr[k] = right_arr[j];
//     j++;
//     k++;
//   }
// }
// function mergeSort(arr, l, r) {
//   if (l < r) {
//     let m = l + parseInt((r - l) / 2);
//     mergeSort(arr, l, m);
//     mergeSort(arr, m + 1, r);
//     merge(arr, l, m, r);
//   } else return;
// }
// mergeSort(arr, 0, arr.length - 1);
//
console.log(arr);
