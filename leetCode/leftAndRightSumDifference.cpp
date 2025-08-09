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
        vector<int> leftRightDifference(vector<int>& nums) {
            vector<int> leftSum(nums.size(),0); 
            vector<int> rightSum(nums.size(),0);
            vector<int> answer(nums.size(),0);
            for(int i = 0; i < nums.size(); i++){
                for (int j = 0; j < i; j++) leftSum[i] += nums[j];
                for (int j = i+1; j < nums.size(); j++) rightSum[i] += nums[j];
                answer[i] = abs(leftSum[i] - rightSum[i]);
            }
            return answer;
        }
};

int main() {
  // vector<char> test = {'a', 'b', 'f','d','A','e','q','z','y'};
  vector<int> test = {2,3,4,7,11};
  cout << findKthPositive(test, 5);
  return 0;
}
