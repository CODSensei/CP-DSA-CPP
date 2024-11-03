#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back

 void merge(vi &arr, int low, int mid, int high){
        vi temp;
        int left = low;
        int right = mid + 1;
        while(left <= mid && right <= high){
            if (arr[left] < arr[right]) {
                temp.pb(arr[left]);
                left++;
            } else {
                temp.pb(arr[right]);
                right++;
            }
        }
        while(left <= mid) {
            temp.pb(arr[left]);
                left++;
        }
        while(right <= high){
            temp.pb(arr[right]);
                right++;
        }
        for(int i = low; i<=high; i++){
            arr[i] = temp[i-low];
        }
    }
  
    void mS(vi &arr, int low, int high) {
        if (low >= high) return;
        int mid = (low + high) /2;
        mS(arr, low, mid);
        mS(arr, mid+1,high);
        merge(arr,low,mid,high);
    }
    
    void mergeSort(vi &arr, int l, int r) {
        // code here
        mS(arr,l,r);
    }
int main() {
	vi arr = {8528, 9208, 808};
	int l = 0;
	int r = arr.size() -1;
	cout << l << " " << r << endl;
 	mergeSort(arr,l,r);
	for(int i = l; i <= r; i++) cout << arr[i] << " ";
	return 0;
}