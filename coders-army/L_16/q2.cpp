#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back    

int main() {
  int arr[18], sum = 0;
  for(int i = 0; i < 18; i++) cin >> arr[i];
   for(int i = 0; i < 18; i ++) {
      cout << arr[i] << " ";
      sum += arr[i];
   }
   cout << endl << sum/18 << endl;

   return 0;
}