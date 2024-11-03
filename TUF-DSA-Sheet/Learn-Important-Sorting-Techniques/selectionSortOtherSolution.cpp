#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back

 public:
    int select(int arr[], int i, int n)
    {
        // code here such that selectionSort() sorts arr[]
        int mini = i;
        for(int j=i+1; j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        return mini;
          
        
    }
     
     
    void selectionSort(int arr[], int n)
    {
       //code here
         for(int i=0;i<n-1;i++){
           int mini = select(arr,i,n);
       if (mini!= i){
           std::swap(arr[i], arr[mini]);
       }
       }
    }

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