// //Mirror Number Pattern:
// /*
// Problem statement
// Print the following pattern for the given N number of rows.
// Detailed explanation ( Input/output format, Notes, Images )
// Input format :
// Integer N (Total no. of rows)
// Output format :
// Pattern in N lines
// Constraints
// 0 <= N <= 50
// Sample Input 1:
// 3
// Sample Output 1:
//   1 
//  12
// 123
// Sample Input 2:
// 4
// Sample Output 2:
//    1 
//   12
//  123
// 1234
// */

// #include<iostream>
// using namespace std;


// int main(){

//        /*  Read input as specified in the question.
// 	* Print output as specified in the question.
// 	*/
//   int n;
//   cin >> n;
//   int i = 1;
//   while(i <= n){
// 	  int spaces = 1;
// 	  while(spaces <= n-i){
// 		  cout << ' ';
// 		  spaces++;
// 	  }
// 	  int stars = 1;
// 	  while(stars <= i){
// 		  cout << stars;
// 		  stars++;
// 	  }
// 	  cout << endl;
// 	  i++;
//   }
// }

// /*
// Problem statement
// Print the following pattern for the given N number of rows.

// Pattern for N = 4
// 4444
// 333
// 22
// 1
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 0 <= N <= 50
// Sample Input 1:
// 5
// Sample Output 1:
// 55555 
// 4444
// 333
// 22
// 1
// Sample Input 2:
// 6
// Sample Output 2:
// 666666
// 55555 
// 4444
// 333
// 22
// 1
// */

// #include<iostream>
// using namespace std;


// int main(){

//        /*  Read input as specified in the question.
// 	* Print output as specified in the question.
// 	*/
//   int n;
//   cin >> n;
//   int i = 1;
//   while(i<=n){
// 	  int j = 1;
// 	  while(j<=n-i+1){
// 		  cout << n-i+1;
// 		  j++;
// 	  }
// 	  cout << endl;
// 	  i++;
//   }
// }


// /*
// Problem statement
// Print the following pattern

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 0 <= N <= 50
// Sample Input 1 :
// 3
// Sample Output 1 :
//    *
//   *** 
//  *****
// Sample Input 2 :
// 4
// Sample Output 2 :
//     *
//    *** 
//   *****
//  *******
// */

// #include<iostream>
// using namespace std;


// int main(){

//        /*  Read input as specified in the question.
// 	* Print output as specified in the question.
// 	*/
//   int n;
//   cin >> n;
//   int i = 1;
//   while(i <= n){
// 	  int spaces = 1;
// 	  while(spaces <= n-i){
// 		  cout << ' ';
// 		  spaces++;
// 	  }
// 	  int stars = 1;
// 	  while(stars <= i){
// 		  cout << '*';
// 		  stars++;
// 	  }
// 	  int j = i-1;
// 	  while(j>=1){
// 		  cout << '*';
// 		  j--;
// 	  }
// 	  cout << endl;
// 	  i++;
//   }
// }


// /*
// Problem statement
// Print the following pattern for the given number of rows.

// Detailed explanation ( Input/output format, Notes, Images )
// Input format :
// Integer N (Total no. of rows)
// Output format :
// Pattern in N lines
// Constraints :
// 0 <= N <= 50
// Sample Input 1:
// 5
// Sample Output 1:
//            1
//           232
//          34543
//         4567654
//        567898765
// Sample Input 2:
// 4
// Sample Output 2:
//            1
//           232
//          34543
//         4567654
// */

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;
//     int i = 1;
//     while(i<=n){
//         int spaces = 1;
//         while(spaces <= n-i){
//             cout << ' ';
//             spaces++;
//         }
//         int j = i;
//         int t = 1;
//         while(t <= i){
//             cout << j;
//             j++;
//             t++;
//         }
//         int num2 = (2*i)-2;
//         int temp = 1;
//         while(temp <= i-1){
//             cout << num2;
//             num2--;
//             temp++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// /*
// Problem statement
// Print the following pattern for the given number of rows.
// Note: N is always odd.
// Pattern for N = 5
//   *
//  ***
// *****
//  ***
//   *
// The dots represent spaces.
// */

// //Efficient method:
// #include <iostream>
// using namespace std;

// int main(){
//     int n = 21;
//     int i = 1;
//     while(i <= (n+1)/2){
//         int spaces = 1;
//         while(spaces <= ((n+1)/2)-i){
//             cout << ' ';
//             spaces++;
//         }
//         int stars = 1;
//         while(stars <= (2*i)-1){
//             cout << '*';
//             stars++;
//         }
//         cout << endl;
//         i++;
//     }
//     i = n/2;
//     while(i  >= 1){
//         int spaces = 1;
//         while(spaces <= ((n/2)-i)+1){
//             cout << ' ';
//             spaces++;
//         }
//         int stars = 1;
//         while(stars <= (2*i)-1){
//             cout << '*';
//             stars++;
//         }
//         cout << endl;
//         i--;
//     }
// }

// //Brute force method:
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int i = 1;
//         while(i<=(n/2)+1){
//         int spaces = 1;
//         while(spaces <= (n/2) - i + 1){
//             cout << ' ';
//             spaces++;
//         }
//         int stars = 1;
//         while(stars <= i){
//             cout << '*';
//             stars++;
//         }
//         int j = 1;
//         while(j <= i-1){
//             cout << '*';
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//         i = 1;
//         while(i<=n/2){
//             int spaces = 1;
//         while(spaces <= i){
//             cout << ' ';
//             spaces++;
//         }
//         int stars = 1;
//         while(stars <= (n/2)-i+1){
//             cout << '*';
//             stars++;
//         }
//         int j = 1;
//         while(j <= (n/2)-i){
//             cout << '*';
//             j++;
//         }
//         cout << endl;
//         i++;
//         }
// }

// /*
// Print this pattern for N=4:
// 4444444
// 33333
// 222
// 1
// 222
// 33333
// 4444444
// */

#include <iostream>
using namespace std;

int main(){
    int n=5;
    int i=n;
    while(i>=1){
        int j = 1;
        while(j <= (i*2)-1){
            cout << i;
            j++;
        }
        cout << endl;
        i--;
    }
    i=2;
    while(i<=n){
        int j = 1;
        while(j <= (i*2)-1){
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}

