#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back

int sum(int n) {
	if (n == 0) return 1;
	return n*sum(n-1);
}


int main() {
	cout << sum(5);
	return 0;
}