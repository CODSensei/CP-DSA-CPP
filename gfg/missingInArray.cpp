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
    int missingNum(vector<int>& arr) {
        // code here
        int N = arr.size() + 1;
        int sum = 0;
        int arraySum = 0;
        for(int i = 1; i < N+1; i++) sum += i;
        for(int i = 0; i < N - 1; i++) arraySum += arr[i];
        return sum - arraySum;
    }
};

int main() {
  

   
  return 0;
}