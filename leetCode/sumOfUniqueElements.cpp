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
    int sumOfUnique(vector<int>& nums) {
        int freq[101] = {0}, n = nums.size(), sum = 0;
        for(int i = 0; i < n; ++i) ++freq[nums[i]];
        for(int i = 0; i < n; ++i){
            if(freq[nums[i]] == 1) sum += nums[i];
        }
        return sum;
    }
};
int main() {
  

   
  return 0;
}