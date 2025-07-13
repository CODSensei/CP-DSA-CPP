#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back    

int main() {
  int n, smallest = INT_MAX, secondSmallest = INT_MAX, thirdSmallest = INT_MAX;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++) cin >> arr[i];
  // 1st method
  for(int i = 0; i < n; i++) {
      if (arr[i] < smallest) smallest = arr[i];
  } 
  for(int i = 0; i < n; i++){
    if (arr[i] < secondSmallest && arr[i] != smallest) secondSmallest = arr[i]; 
  }
  for(int i = 0; i < n; i++){
    if (arr[i] < thirdSmallest && arr[i] != secondSmallest && arr[i] != smallest) thirdSmallest = arr[i]; 
  }

  // 2nd method
  for(int i = 0; i < n; i++){
    if (arr[i] < smallest){
      secondSmallest = smallest;
      thirdSmallest = secondSmallest;
      smallest = arr[i];
    }
    else if (arr[i] < thirdSmallest && arr[i] != secondSmallest && arr[i] != smallest) {
      thirdSmallest = arr[i];
    }
  }

  cout << thirdSmallest << endl;


   
  return 0;
}