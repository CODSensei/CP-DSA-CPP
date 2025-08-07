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
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> nums;
        int n = arr.size();
        for(int i = 0; i < 3000; i++){
            nums.push_back(i+1);
        }

        for(int i = 0; i < n; i++){
            auto new_end = remove(nums.begin(), nums.end(), arr[i]);
            while (nums.size() > (new_end - nums.begin())) {
                nums.pop_back();
            }
        }
        return nums[k - 1];
    }
};

int main() {
  // vector<char> test = {'a', 'b', 'f','d','A','e','q','z','y'};
  vector<int> test = {2,3,4,7,11};
  cout << findKthPositive(test, 5);
  return 0;
}