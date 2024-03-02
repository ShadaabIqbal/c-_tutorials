//Total Salary:
/*
Problem statement
Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -
totalSalary = basic + hra + da + allow – pf
where :
hra   = 20% of basic
da    = 50% of basic
allow = 1700 if grade = ‘A’
allow = 1500 if grade = ‘B’
allow = 1300 if grade = ‘C' or any other character
pf    = 11% of basic.
Round off the total salary and then print the integral part only.

Note for C++ users :

To round off the value , please include<cmath> library in the start of the program.
And round off the values in this way 
int ans = round(yourFinalValue);
Detailed explanation ( Input/output format, Notes, Images )
Input format :
Basic salary & Grade (separated by space)
Output Format :
Total Salary
Constraints
0<=salary<=10000
Sample Input 1 :
10000 A
Sample Output 1 :
17600
Sample Input 2 :
4567 B
Sample Output 2 :
8762
Explanation of Input 2:
We have been given the basic salary as Rs. 4567. We need to calculate the hra, da and pf. 
Now when we calculate each of the, it turns out to be:
hra =  20% of Rs. 4567 = Rs. 913.4
da = 50% od Rs. 4567 = Rs. 2283.5
pf = 11% of Rs. 4567 = Rs. 502.37

Since, the grade is 'B', we take allowance as Rs. 1500.
On substituting these values to the formula of totalSalary, we get Rs. 8761.53 and now rounding it off will result in Rs. 8762 and hence the Answer.
*/
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int basic;
	char grade;
	cin >> basic >> grade;
	float hra = (20.0/100)*basic;
	float da = (50.0/100)*basic;
	float pf = (11.0/100)*basic;
	int allow = 0;
	if(grade == 'A'){
		allow = 1700;
	}else if(grade == 'B'){
		allow = 1500;
	}else{
		allow = 1300;
	}
	int total = (basic+hra+da+allow-pf)+0.5;
	cout << total << endl;
}


//Find power of a number:
/*
Problem statement
Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.

Note : For this question, you can assume that 0 raised to the power of 0 is 1



Detailed explanation ( Input/output format, Notes, Images )
Constraints:
0 <= x <= 8 
0 <= n <= 9
Sample Input 1 :
 3 4
Sample Output 1 :
81
Sample Input 2 :
 2 5
Sample Output 2 :
32
*/
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int x, n;
	cin >> x >> n;
	int total = 1;
	int count = 1;
	while(count <= n){
		total *= x;
		count++;
	}
	cout << total << endl;
}


//Sum of even and odd:
/*
Problem statement
Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately.



Digits mean numbers, not places! That is, if the given integer is "132456", even digits are 2, 4, and 6, and odd digits are 1, 3, and 5.

Constraints
0<= 'n' <=10000


Example :
Input: 'n' = 132456

Output: 12 9

Explanation:
The sum of even digits = 2 + 4 + 6 = 12
The sum of odd digits = 1 + 3 + 5 = 9
Constraints
0<= 'n' <=10000


Example :
Input: 'n' = 132456

Output: 12 9

Explanation:
The sum of even digits = 2 + 4 + 6 = 12
The sum of odd digits = 1 + 3 + 5 = 9
Input format :
 The first line contains an integer 'n'.
Output format :
In a single line, print two space-separated integers, first the sum of even digits and then the sum of odd digits.
Sample Input 1:
132456


Sample Output 1:
12 9


Explanation of sample input 1 :
The sum of even digits = 2 + 4 + 6 = 12
The sum of odd digits = 1 + 3 + 5 = 9


Sample Input 2:
552245


Sample Output 2:
8 15
*/
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin >> n;
	int evenSum = 0;
	int oddSum = 0;
	int lastNum;
	while(n != 0){
		lastNum = n%10;
		if(lastNum%2 == 0){
			evenSum += lastNum;
		}else{
			oddSum += lastNum;
		}
		n=n/10;
	}
	cout << evenSum << " " << oddSum << endl;
}


//Reverse of a number:
/*
Problem statement
Write a program to generate the reverse of a given number N. Print the corresponding reverse number.

Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.



Detailed explanation ( Input/output format, Notes, Images )
Input format :
Integer N
Output format :
Corresponding reverse number
Constraints:
0 <= N < 10^8
Sample Input 1 :
1234
Sample Output 1 :
4321
Sample Input 2 :
1980
Sample Output 2 :
891
*/
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin >> n;
  int reverse = 0;
  int lastNum;
  while (n != 0) {
    lastNum = n % 10;
    reverse = reverse * 10 + lastNum;
    n = (n / 10);
  }
	cout << reverse << endl;
}


//Factors:
/*
Problem statement
Write a program that takes a number as input and prints all its factors except 1 and the number itself.. If the number has only two factors (1 and the number itself), then the program should print -1.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
0 <= n <= 10,000
Sample Input 1 :
8
Sample Output 1 :
2 4
Explanation of Sample Output 1 :
The factors for the number excluding 1 and itself are 2 and 4, so the output is 2 4.
Sample Input 2 :
11
Sample Output 2 :
-1
Explanation of Sample Output 2 :
11 is a prime number having factors 1 and 11 so that output will be -1.
*/
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin >> n;
	int i = 2;
	bool flag = true;
	while(i <= n/2){
		if(n%i == 0){
			cout << i << " ";
			flag = false;
		}
		i++;
	}
	if(flag){
		cout << -1 << endl;
	}
}



