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
    int countFreq(vector<int>& arr, int target) {
        // code here
        int counter = 0;
        for(int i = 0; i < arr.size(); i++) if (arr[i] == target) counter++;
        return counter;
    }
};


int main() {
  

   
  return 0;
}