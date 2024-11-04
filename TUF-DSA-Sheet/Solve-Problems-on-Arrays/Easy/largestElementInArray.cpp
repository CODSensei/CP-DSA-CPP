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

int main() {
	int max = INT_MIN;
	vi arr = {8528, 9208, 808};
	for(int i = 0; i<arr.size(); i++){
		if(arr[i] > max) max = arr[i];
	}
	cout << max;
	return 0;
}