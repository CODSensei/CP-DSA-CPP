#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back  
  
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int ans = INT_MIN, secondMax = -1;
        for(int i = 0; i < arr.size(); i++){
            if (arr[i] > ans) ans = arr[i];
        }
        for(int i = 0; i < arr.size(); i++){
            if (arr[i] != ans) secondMax = max(arr[i], secondMax);
        }
        return secondMax;
    }
};

int main() {
  

   
  return 0;
}