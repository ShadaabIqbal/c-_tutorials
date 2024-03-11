//Nth Fibonacci number:
/*
Problem statement
Write a program to find the Nth Fibonacci number using loops.
Note :
The Fibonacci series is a sequence of numbers in which each number is the sum of the two preceding ones, 
usually starting with first_number  and Second_number . 
First_number and Second_number in this question will be 1 . 
Soo that the resultant series will be 1, 1, 2, 3, 5, 8 ...
Detailed explanation ( Input/output format, Notes, Images )
Input Format :
The first line of each test case contains an Integer number ‘N’.
Output Format :
For each test case, print its equivalent Fibonacci number.
Constraints:
1 <= N <= 10000     
Where ‘N’ represents the number for which we have to find its equivalent Fibonacci number.

Time Limit: 1 second
Sample Input 1:
6
Sample Output 1:
8
Explanation
The Fibonacci sequence starts with two numbers first number is 1 and second number is also 1. 
The subsequent numbers are found by adding the two preceding numbers. 
Therefore, the first six Fibonacci numbers are: 1, 1, 2, 3, 5, 8 . Hence, the 6th Fibonacci number is 8.
*/

#include <iostream>
using namespace std;

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n;
        cin >> n;
        int first_term = 1;
        int second_term = 1;
        int next_term = first_term + second_term;
        if(n == 1 || n == 2){
                next_term = 1;
        }
        for(int i=4; i<=n;i++){
                first_term = second_term;
                second_term = next_term;
                next_term = first_term + second_term;
        }
        cout << next_term << endl;
}


//All Prime Numbers:
//Note: Sieve of Erasthones.
/*
Problem statement
Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).

Print the prime numbers in different lines.

Detailed explanation ( Input/output format, Notes, Images )
Input Format :
Integer N
Output Format :
Prime numbers in different lines
Constraints :
1 <= N <= 100
Sample Input 1:
9
Sample Output 1:
2
3
5
7
Sample Input 2:
20
Sample Output 2:
2
3
5
7
11
13
17
19
*/

#include <iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
	int n;
    cin >> n;
    for(int i = 2; i<=n; i++){
        if(i == 2){
            cout << i << endl;
        } else {
            int divisor = 2;
            bool isDivided = false;
            while(divisor < (i/2)+0.5){
                if(i % divisor == 0){
                    isDivided = true;
                    break;
                }
                 divisor++;
            }
            if(!isDivided){
                cout << i << endl;
            }
        }
    }
}


//Count characters:
/*
Problem statement
Write a program to count and print the total number of characters (lowercase english alphabets only), 
digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.

That is, input will be a stream of characters and you need to consider all the characters which are 
entered till '$'.

Print count of characters, count of digits and count of white spaces respectively (separated by space).

Detailed explanation ( Input/output format, Notes, Images )
Sample Input :
abc def4 5$
Sample Output :
6 2 2
Sample Output Explanation :
Number of characters : 6 (a, b, c, d, e, f)
Number of digits : 2 (4, 5)
Number of white spaces : 2 (one space after abc and one newline after 4)
*/

#include<iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
  char c;
  c = cin.get();
  int count_of_characters = 0;
  int count_of_digits = 0;
  int count_of_whitespaces = 0;
  while(c != '$'){
	  if(c >= 97 && c <= 122){
		  count_of_characters++;
	  } else if(c >= 48 && c <= 57){
		  count_of_digits++;
	  }else {
		  count_of_whitespaces++;
	  }
	  c = cin.get();
  }
  cout << count_of_characters << " " << count_of_digits << " " << count_of_whitespaces << endl;
}


//Sum or Product:
/*
Problem statement
Write a program that asks the user for a number N and a choice C. 
And then give them the possibility to choose between computing the sum and 
computing the product of all integers in the range 1 to N (both inclusive).

If C is equal to -
 1, then print the sum
 2, then print the product
 Any other number, then print '-1' (without the quotes)
Detailed explanation ( Input/output format, Notes, Images )
Input format :
Line 1 : Integer N
Line 2 : Choice C
Output Format :
 Sum or product according to user's choice
Constraints :
1 <= N <= 12
Sample Input 1 :
10
1
Sample Output 1 :
55
Sample Input 2 :
10
2
Sample Output 2 :
3628800
Sample Input 3 :
10
4
Sample Output 3 :
-1
*/

#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin >> n;
	int c;
	cin >> c;
	int sum = 0;
	int product = 1;
	if(c == 1){
		while(n >= 1){
			sum += n;
			n--;
		}
	} else if(c == 2){
		int temp = 1;
		while(temp <= n){
			product *= temp;
			temp++;
		}
	} else {
		sum = -1;
	}
	if(c == 1){
		cout << sum << endl;
	}else if(c == 2) {
		cout << product << endl;
	} else {
		cout << sum << endl;
	}
}



//Terms of AP:
/*
Problem statement
Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= x <= 1,000
Sample Input 1 :
10
Sample Output 1 :
5 11 14 17 23 26 29 35 38 41
Sample Input 2 :
4
Sample Output 2 :
5 11 14 17
Explanation :
Input is 4 and print the first 4 numbers that are not divisible by 4 and are of the form 3N + 2, 
where k is a non-negative integer.
*/

#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int x;
	cin >> x;
	int n = 1;
	for(int i = 1; i<=x; i++){
		int term = (3*n)+2;
		if(term % 4 == 0){
			n++;
			i--;
			continue;
		}else {
			cout << term << ' ';
		}
		n++;
	}
}


//Binary to decimal:
/*
Problem statement
Given a binary number as an integer N, convert it into decimal and print.

Detailed explanation ( Input/output format, Notes, Images )
Input format :
An integer N in the Binary Format
Output format :
Corresponding Decimal number (as integer)
Constraints :
0 <= N <= 10^9
Sample Input 1 :
1100
Sample Output 1 :
12
Sample Input 2 :
111
Sample Output 2 :
7
*/

#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin >> n;
	int count = 0;
	int res = 0;
	while(n > 0){
		int lastBit = n%10;
		if(lastBit == 0){
			res += 0;
			count++;
			n = n/10;
		}else if(lastBit == 1 && count == 0){
			res += 1;
			count++;
			n = n/10;
		} else{
			int bit = 1;
			for(int i = 1; i<= count; i++){
				bit *= 2;
			}
			res += bit;
			count++;
			n=n/10;
		}
	}
	cout << res << endl;
}


//Decimal to Binary:
/*
Problem statement
Given a decimal number (integer N), convert it into binary and print.

Note for C++ coders:
Do not use the inbuilt implementation of "pow" function. 
The implementation of that function is done for 'double's and it may fail when 
used for 'int's, 'long's, or 'long long's. 
Implement your own "pow" function to work for non-float data types. 
The given input number could be large, so the corresponding binary number can exceed the integer range. 
So you may want to take the answer as long for CPP and Java. 

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
0 <= N <= 10^5
Sample Input 1 :
12
Sample Output 1 :
1100
Sample Input 2 :
7
Sample Output 2 :
111
Sample Input 2 :
0
Sample Output 2 :
0
*/

#include<iostream>
using namespace std;

int main() {
	// Write your code here
   long n;
   cin >> n;
   long pv = 1;
   long ans = 0;
   while(n > 0){
      long rem = n%2;
      ans += rem * pv;
      pv *= 10;
      n = n/2;
   }
   cout << ans << endl;
}



//Square root:
/*
Problem statement
Given a number N, find its square root. 
You need to find and print only the integral part of square root of N.

For eg. if number given is 18, answer is 4.

Detailed explanation ( Input/output format, Notes, Images )
Input format :
Integer N
Output Format :
Square root of N (integer part only)
Constraints :
0 <= N <= 10^8
Sample Input 1 :
10
Sample Output 1 :
3
Sample Input 2 :
4
Sample Output 2 :
2
*/

#include<iostream>
using namespace std;

int main() {
	// Write your code here
	long n;
	cin >> n;
	long low = 1;
	long high = n;
	long ans = 0;
	while(low <= high){
		long mid = (low+high)/2;
		if(mid*mid <= n){
			ans = mid;
			low = mid+1;
		}else{
			high = mid-1;
		}
	}
	cout << ans << endl;
}


//Javascript solution:
// function squareRoot(n) {
//     let low = 1;
//     let high = n;
//     let ans = 0;
//     while (low <= high) {
//         let mid = Math.floor((low + high) / 2);
//         if ((mid * mid) <= n) {
//             ans = mid;
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }
//     return ans;
// }