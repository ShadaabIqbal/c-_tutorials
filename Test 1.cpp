//Pyramid Number Pattern:
/*
Problem statement
Print the following pattern for the given number of rows.

Pattern for N = 4
   1
  212
 32123
4321234
Input format : N (Total no. of rows)

Output format : Pattern in N lines

Sample Input :
5
Sample Output :
    1
   212
  32123
 4321234
543212345
*/

#include<iostream>
using namespace std;

int main(){

  // Write your code here  
  int n;
  cin >> n;
  int i = 1;
  while(i <= n){
    int spaces = 1;
    while(spaces <= n-i){
      cout << ' ';
      spaces++;
    }
    int j = i;
    int temp = 1;
    while(temp <= i){
      cout << j;
      j--;
      temp++;
    }
    j = 1;
    int num = j+1;
    while(j <= i-1){
      cout << num;
      num++;
      j++;
    }
    cout << endl;
    i++;
  }  
}


//Number star pattern:
/*
Problem statement
Print the following pattern for given number of rows.

Input format :

Line 1 : N (Total number of rows)

Sample Input :
   5
Sample Output :
1234554321
1234**4321
123****321
12******21
1********1
*/

#include<iostream>
using namespace std;


int main(){

  // Write your code here
  int n;
  cin >> n;
  int i = 1;
  while(i <= n){
    int j = 1;
    while(j <= n-i+1){
      cout << j;
      j++;
    }
    int stars = 1;
    while(stars <= (2*i)-2){
      cout << '*';
      stars++;
    }
    int num = n-i+1;
    while(num >= 1){
      cout << num;
      num--;
    }
    cout << endl;
    i++;
  }
}


//Second largest:
/*
Problem statement
Take input a stream of n integer elements, find the second largest element present.

The given elements can contain duplicate elements as well. 
If only 0 or 1 element is given, the second largest should be INT_MIN ( - 2^31 ).
Input format :

Line 1 : Total number of elements (n)

Line 2 : N elements (separated by space)

Sample Input 1:
 4
 3 9 0 9
Sample Output 1:
 3
Sample Input 2 :
 2
 4 4
Sample Output 2:
 -2147483648
Sample Output Explanation:
Since both the elements are equal here, hence second largest element is INT_MIN i.e. ( -2^31 )
*/

#include<iostream>
using namespace std;
#include <climits>


int main(){
    
    // Write your code here
    int n;
    cin >> n;

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;

        if (num > largest) {
            second_largest = largest;
            largest = num;
        } else if (num > second_largest && num != largest) {
            second_largest = num;
        }
    }

    if (second_largest == INT_MIN) {
        cout << INT_MIN << endl;
    } else {
        cout << second_largest << endl;
    }

    return 0;
}


