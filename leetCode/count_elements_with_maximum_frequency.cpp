#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;
typedef vector<char> vc;

//Macros
#define pb push_back

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> v(101,0);
        int maxFrequency = 0, sum = 0;
        for(int i = 0; i < nums.size(); i++){
            ++v[nums[i]];
        }
        for(int i = 0; i < v.size(); i++){
            maxFrequency = max(maxFrequency,v[i]);
        }
        for(int i = 0; i < v.size(); i++){
            if (v[i] == maxFrequency) {
                sum += v[i];
            }
        }
        return sum;
    }
};

int main() {
    
    return 0;
}
