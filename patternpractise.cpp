// /*
// 4444
// 4444
// 4444
// 4444
// */
// #include <iostream>
// using namespace std;

// int main(){
//     int n = 7;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j<=n)
//         {
//             cout << n;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

/*
*
**
***
****
*/

// #include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while (j<=i)
//         {
//             /* code */
//             cout << '*';
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

/*
1
22
333
4444
*/
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     int i = 1;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=i)
//         {
//             cout << i;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

/*
1
21
321
4321
*/
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     int i =1;
//     while (i<=n)
//     {
//         /* code */
//         int j = 1;
//         while (j<=i)
//         {
//             /* code */
//             cout << i-j+1;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
    
// }

/*
 A
 BB
 CCC
*/
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 3;
//     int i =1;
//     while(i<=3){
//         int j = 1;
//         char startChar = 'A' + i - 1;
//         while(j<=i){
//             cout << startChar;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

/*
A
BC
CDE
DEFG
*/
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         char startChar = 'A' + i - 1;
//         while(j<=i){
//             cout << startChar;
//             j++;
//             startChar++;
//         }
//         cout << endl;
//         i++;
//     }
// }


/*
E
DE
CDE
BCDE
ABCDE
*/
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         char startChar = 'A' + n - i;
//         while(j<=i){
//             cout << startChar;
//             startChar++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

/*
****
***
**
*
*/
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     int i = 1;
//     while(i<=n){
//         int stars = 1;
//         while(stars <= n - i + 1){
//             cout << '*';
//             stars ++;
//         }
//         int spaces = 1;
//         while(spaces <= i - 1){
//             cout << ' ';
//             spaces++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 11;
//     int i = 1;
//     while(i<=n){
//         int spaces = 1;
//         while(i <= (n/2)+1){
//         while(spaces <= n-i){
//             cout << ' ';
//             spaces++;
//         }
//         int j = 1;
//         int temp = i;
//         while(j <= i){
//             cout << '*';
//             j++;
//             temp++;
//         }
//         j=1;
//         temp = temp - 2;
//         while(j <= i-1){
//             cout << '*';
//             temp--;
//             j++;
//         }
//         }
//         cout << endl;
//         i++;
//     }
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n = 7;
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

/*
4444444
33333
222
1
222
33333
4444444
*/

// #include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     int i = n;
//     while(i>=1){
//         int j = 1;
//         while(j <= (i*2)-1){
//             cout << i;
//             j++;
//         }
//         cout << endl;
//         i--;
//     }
//     i = 2;
//     while(i <= n){
//         int j = 1;
//         while(j <= (i*2)-1){
//             cout << i;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

/*
   1
  12
 123
1234
*/
// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     int i = 1;
//     while(i<=n){
//         int spaces = 1;
//         while(spaces <= n-i){
//             cout << ' ';
//             spaces++;
//         }
//         int j = 1;
//         while(j <= i){
//             cout << j;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

/*
4444
333
22
1
*/

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         while(j <= n-i+1){
//             cout << n-i+1;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

/*
   *
  *** 
 *****
*******
*/

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     int i = 1;
//     while(i <= n){
//         int spaces = 1;
//         while(spaces <= n-i){
//             cout << ' ';
//             spaces++;
//         }
//         int stars1 = 1;
//         while(stars1 <= i){
//             cout << '*';
//             stars1++;
//         }
//         int stars2 = 1;
//         while(stars2 <= i-1){
//             cout << '*';
//             stars2++;
//         }
//         cout << endl;
//         i++;
//     }
// }


/*
   1
  232
 34543
4567654
*/
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

/*
   *
  ***
 *****
*******
 *****
  ***
   *
*/
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

// #include <iostream>
// using namespace std;
// int main() 
// {    
//          int x= 10, y = 1;
//          if (++x >10 || x / 0 == 0)
//             cout << y;
//          else
//              cout << x;
// } 

// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 10;
//     int y = 20;
//     if(x++ > 10 && ++y > 20 ){
//     cout << "Inside if ";
//     } else{
//     cout << "Inside else ";
//     }
//     cout << x << ' ' << y;
// }

// #include <iostream>
// using namespace std;
// int main(){
// for(int i = 0; i < 5; i = i + 1) {
//      if(i == 2) 
//            continue;
//     cout << i << " ";
//  }  
// }

// #include <iostream>
// using namespace std;

// int main() {
// 	// Write your code here
//     // Write your code here
//     int n = 4;

// }




// #include <iostream>
// #include <climits>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int largest = INT_MIN;
//     int second_largest = INT_MIN;

//     for (int i = 0; i < n; ++i) {
//         int num;
//         cin >> num;

//         if (num > largest) {
//             second_largest = largest;
//             largest = num;
//         } else if (num > second_largest && num != largest) {
//             second_largest = num;
//         }
//     }

//     if (second_largest == INT_MIN) {
//         cout << INT_MIN << endl;
//     } else {
//         cout << second_largest << endl;
//     }

//     return 0;
// }
