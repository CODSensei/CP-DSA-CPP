#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back    

int main() {
  int n, largest = INT_MIN, secondLargest = INT_MIN;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++) cin >> arr[i];
  // 1st method
  for(int i = 0; i < n; i++) {
      if (arr[i] > largest) largest = arr[i];
  } 
  for(int i = 0; i < n; i++){
    if (arr[i] > secondLargest && arr[i] != largest) secondLargest = arr[i]; 
  }

  // 2nd method
  for(int i = 0; i < n; i++){
    if (arr[i] > largest){
      secondLargest = largest;
      largest= arr[i];
    }
    else if (arr[i] > secondLargest && arr[i] != largest){
      secondLargest = arr[i];
    }
  }

  cout << secondLargest << endl;


   
  return 0;
}