#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back
    
int Cube(int n){
   return n*n*n;
}

int main() {
   
   int n;
   cin >> n;
   cout << Cube(n) << endl;

   return 0;
}