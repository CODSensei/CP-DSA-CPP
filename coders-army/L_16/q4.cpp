#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back    

int main() {
  // int n, target;
  // cin >> n >> target;
  // int arr[n];
  // for(int i = 0; i < n; i++) cin >> arr[i];
  //  for(int i = 0; i < n; i++) {
  //     cout << arr[i] << " ";
  //     if (arr[i] == target) cout << endl << i << endl;
  //     break;
  //     if (i == n-1) cout << endl << -1 << endl;
  //  } 
   char a = 'a';
   char arr[26];
   for(int i = 0; i < 26; i++){
      arr[i] = a + i;
   }
   for(int i = 0; i < 26; i++) cout << arr[i] << " ";
   
   

   return 0;
}