#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back

  
//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int partition (int arr[], int low, int high)
    {
       // Your code here
       int pivot = arr[low];
       int i = low;
       int j = high;
       while(i<j){
           while (arr[i] <= pivot && i <= high){
               i++;
           }
           while (arr[j] > pivot && j >= low){
               j--;
           }
           if (i < j) swap(arr[i],arr[j]);
       }
       swap(arr[j],arr[low]);
       return j;
    }


    
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if (low < high){
            int partition_index = partition(arr, low, high);
            quickSort(arr, low, partition_index - 1);
            quickSort(arr, partition_index + 1, high);
        }
        return;
    }
    
   
    



int main() {
	int arr[] = {8528, 9208, 808};
	int l = 0;
	int r = 2;
	cout << l << " " << r << endl;
 	quickSort(arr,l,r);
	for(int i = l; i <= r; i++) cout << arr[i] << " ";
	return 0;
}