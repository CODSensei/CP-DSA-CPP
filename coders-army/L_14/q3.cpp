#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back
    
void Swap(int &a, int &b, int &c){
   int temp;
   temp = c;
   c = b;
   b = a; 
   a = temp;
}

int main() {
   
   int a,b,c;
   cin >> a >> b >> c;
   Swap(a,b,c);
   cout << a << " " << b << " " << c << endl;

   return 0;
}