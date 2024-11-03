#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back

class Solution {
  public:
   void bubbleSort(int arr[], int n) {
        // Your code here
        if (0 == n) return;
        int didSwap = 0;
        for(int j = 0; j<n-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            didSwap = 1;
        }
        if (0 == didSwap) return;
        bubbleSort(arr,n-1);
        
    }
};
int main() {
	int N = 5;
	vi arr = {2, 3, 2, 3, 5};
	int p = 5;
	unordered_map<int,int> mp;
	for(int i = 0; i<N; i++){
		mp[arr[i]]++;		
	}
	for(int i = 0; i<N; i++){
		arr[i] = mp[i+1]; 
	}
	for(int i = 0; i<N; i++){
		cout << arr[i];
	}
	return 0;
}