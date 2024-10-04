#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Type defined
typedef vector<long long> vll;

//Macros
#define pb push_back

int factorial(int A){
	if (A==0) return 1;
	return A*factorial(A-1);
}


int main() {
	int A;
	// int sum = 0;
	cin >> A;
	vll v;

	for(int i = 1; i<=A; i++){
		if(factorial(i) <=A) v.pb(factorial(i));
	}	

	for(auto it = v.begin(); it!=v.end(); it++) {
		cout << *(it) << " ";
	}
	return 0;
}