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
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i < nums.size() - 1; i++){
            for(int j = i+1; j < nums.size(); j++){
                if (nums[i] == nums[j]) count++;
            }
        }
        return count;
    }
};

int main() {
  vector<char> test = {'a', 'b', 'f','d','A','e','q','z','y'};
  selectionSort(test);
  return 0;
}