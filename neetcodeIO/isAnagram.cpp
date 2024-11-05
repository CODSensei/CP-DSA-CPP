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

bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if (s == t) return true;
        return false;
    }

int main() {
	// vi arr = {8528, 9208, 9208, 808};
    string s = "jam",t= "jar";
    cout << isAnagram(s,t);	
	return 0;
}