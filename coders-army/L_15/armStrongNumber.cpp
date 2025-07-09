#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back

int countDigits(int n){
   int digits = 0;
   while(n){
      n=n/10;
      digits++;
   }
   return digits;
}

bool armStrong(int n, int digits){
   int originalNumber = n, reminder = 0, armStrongNumber = 0;
   while(n){
      reminder = n%10;
      n=n/10;
      armStrongNumber = armStrongNumber + pow(reminder,digits);
   }
   return originalNumber == armStrongNumber ? true : false;
}

int main() {
   
   int n;
   cin >> n;
   int digits = countDigits(n);
   cout << armStrong(n,digits) << endl;

   return 0;
}