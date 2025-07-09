#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back

 int countBits(int n){
      int counter = 0;
      while(n){
          counter++;
          n &= (n-1);
      }
      return counter;
  }
    int countBitsFlip(int a, int b) {
        // code here
        return countBits(a ^ b);
        
    }

    

int main() {
   
   int a,b;
   cin >> a >> b;
   cout << countBitsFlip(a,b) << endl;

   return 0;
}