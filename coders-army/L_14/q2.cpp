#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back
    
int reverse(int n){
   int a = n, reminder = 0, answer = 0;
   // if (n<0) {
   //    n = n * (-1);
   // }
   while(n) {
   reminder = n%10;
   n /= 10;
   answer = answer * 10 + reminder;
   }
   // if (a<0) return answer * (-1);
   return answer;
}

int main() {
   
   int n;
   cin >> n;
   cout << reverse(n) << endl;

   return 0;
}