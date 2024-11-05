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

vi getConcatenation(vector<int>& nums) {
        vi v(2*nums.size(),0);
        for(int i = 0; i < nums.size(); i++){
            v[i] = nums[i];
        }
        for(int i = 0; i < nums.size(); i++){
            v[i+nums.size()] = nums[i];
        }
        return v;
    }

int main() {
	vi arr = {8528, 9208, 98, 808};
    getConcatenation(arr);	
	return 0;
}