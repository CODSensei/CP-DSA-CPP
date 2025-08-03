#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back  
  
void binarySearch(vector<int> arr, int key){
    sort(arr.begin(),arr.end(),greater<int>());
    int start = 0, end = arr.size() - 1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            cout << mid << endl;
            break;
        } else if (arr[mid] < key) 
            end = mid - 1;
        else 
            start = mid + 1;
    } 
}

int main() {
  // vector<char> test = {'a', 'b', 'f','d','A','e','q','z','y'};
  vector<int> test = {8, 3, 0,1,9,4,2,5,6};
  binarySearch(test, 9);
  return 0;
}