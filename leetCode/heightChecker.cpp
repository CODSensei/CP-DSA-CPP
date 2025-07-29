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
    int heightChecker(vector<int>& heights) {
        int counter = 0;
        vector<int> expected;
        for(int i = 0; i < heights.size(); i++){
            expected.push_back(heights[i]);
        }
        sort(expected.begin(), expected.end());
        for(int i = 0; i < heights.size(); i++){
            if (expected[i] != heights[i]) counter++;
        }
        return counter;
    }
};

int main() {
     
  return 0;
}