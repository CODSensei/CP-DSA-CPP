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
    int firstRepeated(vector<int> &arr) {
        // code here
        for(int i = 0; i < arr.size(); i++){
            for(int j = i+1; j < arr.size(); j++){
                if (arr[i] == arr[j]) return ++i;
            }
        }
        return -1;
    }
};

int main() {
  

   
  return 0;
}