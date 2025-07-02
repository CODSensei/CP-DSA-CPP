#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back
    
void Swap(int &a, int &b){
   a = a ^ b;
   b = a ^ b;
   a = a ^ b;
}

int main() {
   
   int a,b;
   cin >> a >> b;
   Swap(a,b);
   cout << a << " " << b << endl;

   return 0;
}