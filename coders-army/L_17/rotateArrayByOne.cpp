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
    void rotate(vector<int> &arr) {
        // code here
        int temp = arr[arr.size() -1];
        for(int i = arr.size() - 1; i > 0; i--){
            arr[i] = arr[i-1];
        }
        arr[0] = temp;
    }
};

int main() {
  

   
  return 0;
}