#include <iostream>
using namespace std;


//problem1
// int multiply (int a, int b) {
//     if (a==0 || b==0) return 0;
//     if (a<0&&b<0) return multiply (-a, -b);
//     if (b<0) return -multiply (a, -b);
//
//     return a+multiply(a, b-1);
// }
// int main() {
//     int num1, num2;
//     cout<<"Enter two numbers"<<endl;
//     cin>>num1>>num2;
//     int result=multiply (num1, num2);
//     cout<<"The product of these two numbers is "<<result<<endl;


//problem 2
// int factroial(int n) {
//     if (n==0 || n==1)  return 1;
//     else return n*factroial(n-1);
// }
// int main () {
// int a;
// cout<<"Enter a number"<<endl;
// cin>>a;
//     int result = factroial(a);
// cout<<"Factorial is "<<result<<endl;

//problem3
// int fibonacci (int n) {
//     if (n==0) return 0;
//     if (n==1) return 1;
//     return fibonacci(n-1)+fibonacci(n-2);
// }
// int main(){
//     int a;
//     cout << "Enter a number: ";
//     cin >> a;
//     int result=fibonacci(a);
//     cout<<"Fibonacci number is "<<result<<endl;


//problem4
// int sum (int n) {
// if (n == 0) return 0;
//     else return n + sum (n - 1);
// }
// int main() {
//     int a;
//     cout << "Enter a number: ";
//     cin >> a;
//     cout << "The result is "<<sum (a) << endl;

//problem5
// void print (int n) {
//     if (n<1) return;
//     cout<<n<<" ";
//     print (n-1);
// }
// int main() {
//     int a;
//     cout<<"Enter a number: ";
//     cin>>a;
//     print (a);


//problem6
// int countdigits(int n) {
//     if(n == 0) return 0;
//     else return 1 + countdigits(n/10);
//
// }
// int main() {
//     int a;
//     cout<<"Enter a number: ";
//     cin>>a;
//     cout<<"The number of digits is: "<<countdigits(a);

//problem7
// int sumofdigits(int n) {
//     if(n==0) return 0;
//     return n%10 + sumofdigits(n/10);
// }
// int main() {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     cout<<"Sum of digits: "<<sumofdigits(n);

//problem8
// int power(int base, int exp) {
//     if (exp == 0) return 1;
//     return base*power(base,exp-1);
// }
// int main() {
//     int x, y;
//     cout << "Enter base and power ";
//     cin >> x >> y;
//     cout << power(x,y) << endl;

//problem9
 // int reverse(int n, int rev) {
 //     if (n==0) return rev;
 //     return +reverse (n/10, rev*10+n%10);
 //
 // }
 // int main() {
 //     cout<<"enter a number: ";
 //     int n;
 //     cin>>n;
 //     int result = reverse(n, 0);
 //     cout<<result;

//problem10
// int reverse(int n, int rev) {
//     if (n==0) return rev;
//     return +reverse (n/10, rev*10+n%10);
// }
// bool ispalindrome(int num) {
// if (num<0) return false;
//     return num==reverse(num, 0);
// }
// int main() {
//     cout<<"enter a number: ";
//     int num;
//     cin>>num;
//     if (ispalindrome(num))
//         cout << "true\n";
//     else
//         cout << "false\n";

//problem11
// bool isPrime(int number, int divisor = 2) {
//     if (number < 2)
//         return false;
//
//     if (divisor*divisor > number)
//         return true;
//
//     if (number % divisor == 0)
//         return false;
//
//     return isPrime(number, divisor + 1);
// }
//
// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
//     if (isPrime(number))
//         cout << number << " is prime." << endl;
//     else
//         cout << number << " is not prime." << endl;

//problem12

void towerOfHanoi(int N, char fromPeg, char toPeg, char auxPeg) {
    if (N == 1) {
        cout << "Move disk 1 from " << fromPeg << " to " << toPeg << endl;
        return;
    }
    towerOfHanoi(N - 1, fromPeg, auxPeg, toPeg);
    cout << "Move disk " << N << " from " << fromPeg << " to " << toPeg << endl;

    towerOfHanoi(N - 1, auxPeg, toPeg, fromPeg);
}

int main() {
    int N;
    cout << "Enter the number of disks: ";
    cin >> N;
    towerOfHanoi(N, 'A', 'C', 'B');

    return 0;
}

