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
    int countFreq(vector<int>& arr, int target) {
        // code here
        int start = 0, end = arr.size() - 1, first = -1, last = -1, mid;
        while(start <= end){
            mid = start + (end - start)/2;
            if (arr[mid] == target){
                first = mid;
                end = mid - 1;
            } else if (arr[mid] < target) start = mid + 1;
            else end = mid-1;
        }
        
        start = 0;
        end = arr.size() - 1;
         while(start <= end){
            mid = start + (end - start)/2;
            if (arr[mid] == target){
                last = mid;
                start = mid + 1;
            } else if (arr[mid] < target) start = mid + 1;
            else end = mid - 1;
        }
        
        if (first == -1 || last == -1) return 0;
        else return last - first + 1;
    }
};

int main() {
  // vector<char> test = {'a', 'b', 'f','d','A','e','q','z','y'};
  vector<int> test = {8, 3, 0,1,9,4,2,5,6};
  binarySearch(test, 9);
  return 0;
}