//Loops in C++

#include <iostream>
using namespace std;

int main() {
    

// while loop

// find Even number

//     int n, i, val;

// cout << "Enter the value of n: " << endl;
// cin >> n;

// i = 0, val = 0;

// while(i< n){
    cout << val << endl;
    val += 2;
    i++;

int n, i;
long long int val;
cout << " we will find in this program 2^n " <<endl;
cout << "Enter the value of n: " << endl;
cin >> n;

 i = 0, val = 1;
 while(i < n){
    val *= 2;
    i++;

 }
 cout << "2 raised to the power of " << n << " is " << val << endl;

// dowhile loop

 int i = 0;
 do {
    cout << i << endl;
    i++;
 }  while(i < 10);

//  for loop

int i;

// for (Initialize; Conditional; Increament-Type;) {}
for (i = 0; i < 10; i++) {
    cout << i << endl;
}

return 0;
}



