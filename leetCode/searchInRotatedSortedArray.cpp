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
    int search(vector<int>& arr, int target) {
        int start = 0, end = arr.size() - 1, mid;
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (arr[mid] == target)
                return mid;

            // left side sorted
            else if (arr[mid] >= arr[0]) {
                if (arr[start] <= target && arr[mid] > target)
                    end = mid - 1;
                else
                    start = mid + 1;

                // right side sorted
            } else {
                if (arr[mid] < target && arr[end] >= target)
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }

        return -1;
    }
};

int main() {
    
    return 0;
}
