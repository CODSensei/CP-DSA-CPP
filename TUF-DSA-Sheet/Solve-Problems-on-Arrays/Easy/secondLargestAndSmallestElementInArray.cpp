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

int getSecondLargest(int n, vector<int> a){
    int max = a[0];
    int sec_max = -1;
    for(int i = 0; i<n; i++){
        if (a[i] > max) {
            sec_max = max;
            max = a[i];
        }else if (a[i] < max && a[i] > sec_max) sec_max = a[i];
    }
    return sec_max;
}

int getSecondSmallest(int n, vector<int> a){
    int min = a[0];
    int sec_min = INT_MAX;
    for(int i = n-1; i>=0; i--){
        if (a[i] < min)
        {
            sec_min = min;
            min = a[i]; 
        }
        else if (a[i] != min && a[i] < sec_min) {
            sec_min = a[i];
        }
    }
    return sec_min;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int sec_max = getSecondLargest(n,a);
    int sec_min = getSecondSmallest(n,a);
    return {sec_max,sec_min};
}

int main() {
	vi arr = {8528, 9208, 98, 808};
	vi v = getSecondOrderElements(4,arr);
	cout << v[0] << endl << v[1];
	return 0;
}