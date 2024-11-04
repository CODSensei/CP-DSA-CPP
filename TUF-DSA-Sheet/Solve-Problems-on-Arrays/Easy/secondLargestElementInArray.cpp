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
	vi arr = {8528, 9208, 808};
	int max = arr[0];
    int secondMax = -1;
	for(int i = 0; i < arr.size(); i++){
		if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] < max) 
        	secondMax = arr[i];
    }
	cout << "Max = " << max << "\n" << "Min = " << secondMax;
	return 0;
}