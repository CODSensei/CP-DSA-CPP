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
    int missingNumber(vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end());
    int res = 1;
    for (int i = 0; i < arr.size(); i++) {

        // If we have found 'res' in the array,
        // 'res' is no longer missing, so increment it
        if (arr[i] == res) 
            res++;

        // If the current element is larger than 'res',
        // 'res' cannot be found in the array,
        // so it is our final answer
        else if (arr[i] > res) 
            break;
    }
    return res;
    }
};

int main() {
  

   
  return 0;
}