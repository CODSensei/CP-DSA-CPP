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
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth = 0, n = accounts.size();
        for(int i = 0; i < n; i++){
            int current_wealth = 0;
            for(int j = 0; j < accounts[i].size(); j++){
                current_wealth += accounts[i][j];
            }
            max_wealth = max(max_wealth, current_wealth);
        }
        return max_wealth;
    }
};

int main() {
    
    return 0;
}
