#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back

char lowerToUpperCase(char a){
   return a - 32; // ascii difference is 32
   // another Way
   // return a - 'a' + 'A';
}

int main() {
   
   char a;
   cin >> a;
   cout << lowerToUpperCase(a) << endl;

   return 0;
}