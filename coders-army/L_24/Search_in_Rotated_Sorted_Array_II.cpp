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
    bool search(vector<int>& arr, int target) {
        int l = 0, r = arr.size() - 1, m;
        while (l <= r){
            m = r + (l - r) / 2;
            if (arr[m] == target) return true;
            if (arr[l] > arr[m]){ // right partition
                if (arr[m] < target && target <= arr[r]) l = m + 1;
                else r = m - 1;
            }
            else if (arr[l] < arr[m]) { // left partition
                if (arr[l] <= target && target < arr[m]) r = m - 1;
                else l = m + 1;
            }
            else l += 1;
        }
        return false;
    }
};

int main() {
    
    return 0;
}
