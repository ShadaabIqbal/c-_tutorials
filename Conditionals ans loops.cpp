//Total Salary:
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
