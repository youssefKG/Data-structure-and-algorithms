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
for (let i = 1; i < arr.length; i++) {
  let key = arr[i];
  let j = i - 1;
  while (j >= 0 && key < arr[j]) {
    arr[j + 1] = arr[j];
    j--;
  }
  arr[j + 1] = key;
}
console.log(arr);
