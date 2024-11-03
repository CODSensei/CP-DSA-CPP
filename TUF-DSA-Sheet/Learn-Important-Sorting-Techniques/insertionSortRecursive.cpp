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
   void insert(int arr[], int j)
    {
        //code here
        while ( j > 0 && arr[j-1] > arr[j]) {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
            if (0 == n) return;
            insertionSort(arr, n-1);
            insert(arr,n-1);
        
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