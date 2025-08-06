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
    int countZeroes(vector<int> &arr) {
        // code here
        int start = 0, end = arr.size() - 1, first, last, mid;
        while(start <= end){
            mid = start + (end - start)/2;
            if (arr[mid] == 0){
                first = mid;
                end = mid - 1;
            } else if (arr[mid] < 0) end = mid - 1;
            else start = mid + 1;
        }
        
        start = 0;
        end = arr.size() - 1;
         while(start <= end){
            mid = start + (end - start)/2;
            if (arr[mid] == 0){
                last = mid;
                start = mid + 1;
            } else if (arr[mid] < 0) end = mid - 1;
            else start = mid + 1;
        }
        
        return last - first + 1;
    }
};

int main() {
  // vector<char> test = {'a', 'b', 'f','d','A','e','q','z','y'};
  vector<int> test = {8, 3, 0,1,9,4,2,5,6};
  binarySearch(test, 9);
  return 0;
}