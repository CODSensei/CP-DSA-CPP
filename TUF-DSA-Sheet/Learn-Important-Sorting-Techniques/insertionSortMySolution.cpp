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
    void insert(int arr[], int j, int n)
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
        for(int i = 0; i < n; i++){
            int j = i;
            insert(arr,j,n);
        }
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