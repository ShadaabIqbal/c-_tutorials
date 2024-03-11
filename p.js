// // function main(n) {
// //   /*  Read input as specified in the question.
// //    * Print output as specified in the question.
// //    */
// //   let i = 1;
// //   let str = "";
// //   while (i <= n) {
// //     let spaces = 1;
// //     while (spaces <= n - i) {
// //       str += " ";
// //       spaces++;
// //     }
// //     let j = 1;
// //     let temp = i;
// //     while (j <= i) {
// //       str += temp;
// //       temp++;
// //       j++;
// //     }
// //     j = 1;
// //     temp = 2 * (i - 1);
// //     while (temp >= i) {
// //       str += temp;
// //       temp--;
// //       j++;
// //     }
// //     str += "\n";
// //     i++;
// //   }
// //   return str;
// // }

// // console.log(main(5));

// function main() {
//   let n = 5;
//   let i = 1;
//   while (i <= Math.floor(n / 2) + 1) {
//     let spaces = 1;
//     while (spaces <= Math.floor(n / 2) - i + 1) {
//       process.stdout.write(" ");
//       spaces++;
//     }
//     let stars = 1;
//     while (stars <= i) {
//       process.stdout.write("*");
//       stars++;
//     }
//     let j = 1;
//     while (j <= i - 1) {
//       process.stdout.write("*");
//       j++;
//     }
//     process.stdout.write("\n");
//     i++;
//   }

//   i = 1;
//   while (i <= n / 2) {
//     let spaces = 1;
//     while (spaces <= i) {
//       process.stdout.write(" ");
//       spaces++;
//     }
//     let stars = 1;
//     while (stars <= Math.floor(n / 2) - i + 1) {
//       process.stdout.write("*");
//       stars++;
//     }
//     let j = 1;
//     while (j <= Math.floor(n / 2) - i) {
//       process.stdout.write("*");
//       j++;
//     }
//     process.stdout.write("\n");
//     i++;
//   }
// }

// main();

// Upper half of the pattern
// let rows = 2;
// let i = rows;
// do {
//   let output = "";
//   for (let j = 1; j <= 2 * i - 1; j++) {
//     output += i;
//   }
//   console.log(output);
//   i--;
// } while (i >= 1);

// // Lower half of the pattern
// i = 2;
// do {
//   let output = "";
//   for (let j = 1; j <= 2 * i - 1; j++) {
//     output += i;
//   }
//   console.log(output);
//   i++;
// } while (i <= rows);
// let num = 10;

// function isBitSet(num, pos) {
//   let a = (num & (1 << pos));
//   console.log(a);
//   return a !== 0;
// }
// //1010
// //0010
// console.log(isBitSet(num, 1));
// let array = [5, 7, 3, 4, 6];
// let j = 1;
// for (let i = 0; i < array.length; ++i) {
//   console.log(array[i]);
//   j++;
//   if (j === 3) {
//     break;
//   }
// }
// function countChars(str) {
//   let countOfChars = 0;
//   let countOfDigits = 0;
//   let countOfSpaces = 0;
//   let i = 0;
//   while (str[i] != "$") {
//     if (str[i].charCodeAt(0) >= 97 && str[i].charCodeAt(0) <= 122) {
//       countOfChars++;
//     } else if (str[i].charCodeAt(0) >= 48 && str[i].charCodeAt(0) <= 57) {
//       countOfDigits++;
//     } else {
//       countOfSpaces++;
//     }
//     i++;
//   }
//   return `${countOfChars} ${countOfDigits} ${countOfSpaces}`;
// }
// console.log(countChars("abc def4 5$"));

// function main() {
//   let x = 85;
//   let n = 1;
//   for (let i = 1; i <= x; i++) {
//     let term = 3 * n + 2;
//     if (term % 4 === 0) {
//       continue;

//     } else {
//       process.stdout.write(term + " ");
//     }
//     n++;
//   }
// }

// main();

// let n = 10;
// function binaryToDecimal(n) {
//   let x = 1;
//   let res = 2;
//   let temp = 0;
//   while(res < n){
//     x = x*10;
//     temp = res;
//     res = res*2;
//   }
//   return x;
// }
// console.log(binaryToDecimal(n));

//QUICK SORT:
// let arr = [5, 6, 4, 3, 7, 8, 9, 2, 4, 5];
// function swap(arr, i, j) {
//   let temp = arr[i];
//   arr[i] = arr[j];
//   arr[j] = temp;
//   return arr;
// }

// function partition(arr, low, high) {
//   let pivot = arr[low];
//   let i = low;
//   let j = high;
//   while (i < j) {
//     while (arr[i] <= pivot && i <= high - 1) {
//       i++;
//     }
//     while (arr[j] > pivot && j >= low + 1) {
//       j--;
//     }
//     if (i < j) swap(arr, i, j);
//   }
//   swap(arr, low, j);
//   return j;
// }

// function qs(arr, low, high) {
//   if (low < high) {
//     let pIndex = partition(arr, low, high);
//     qs(arr, low, pIndex - 1);
//     qs(arr, pIndex + 1, high);
//   }
//   return arr;
// }

// console.log(qs(arr, 0, arr.length - 1));

// function isPrime(n) {
//   for (let divisor = 2; divisor <= Math.floor(Math.sqrt(n)); divisor++) {
//     if (n % divisor === 0) {
//       return false;
//     }
//   }
//   return true;
// }
// function allPrimes(n) {
//   for (let i = 2; i <= n; i++) {
//     if (i === 2) {
//       console.log(i);
//     } else {
//       if (isPrime(i)) {
//         console.log(i);
//       }
//     }
//   }
// }

// console.log(allPrimes(10));

// function squareRoot(n) {
//   let low = 1;
//   let high = n;
//   let ans = 0;
//   while (low <= high) {
//     let mid = Math.floor((low + high) / 2);
//     if (mid * mid <= n) {
//       ans = mid;
//       low = mid + 1;
//     } else {
//       high = mid - 1;
//     }
//   }
//   return ans;
// }
// console.log(squareRoot(18));


