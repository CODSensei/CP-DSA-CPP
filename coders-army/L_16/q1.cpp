#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back    

int main() {
  int arr[20], sum = 0;
  for(int i = 0; i < 20; i++) cin >> arr[i];
   for(int i = 0; i < 20; i ++) {
      cout << arr[i] << " ";
      sum += arr[i];
   }
   cout << endl << sum << endl;

   return 0;
}