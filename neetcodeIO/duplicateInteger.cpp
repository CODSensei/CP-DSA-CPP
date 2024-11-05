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

bool hasDuplicate(vector<int>& nums) {
        if (nums.size() == 0) return false;
        for(int i = 0; i< nums.size()-1; i++){
            int c = 0;
            for(int j = i+1; j < nums.size(); j++){
                if (nums[i] == nums[j]) 
                    c++;
            }
            if(c != 0) {
                return true;
                break;
            }
        }
        return false;

    }

int main() {
	vi arr = {8528, 9208, 9208, 808};
    cout << hasDuplicate(arr);	
	return 0;
}