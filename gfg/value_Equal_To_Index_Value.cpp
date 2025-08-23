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
    // Function to find elements in the array that are equal to their index.
    vector<int> valueEqualToIndex(vector<int>& arr) {
        // code here
        vector<int> ans;
        for(int i = 0; i < arr.size(); i++){
            if (arr[i] == i+1){
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};

int main() {
    
    return 0;
}
