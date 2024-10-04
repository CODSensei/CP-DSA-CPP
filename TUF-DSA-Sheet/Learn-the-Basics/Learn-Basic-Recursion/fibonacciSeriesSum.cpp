#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back

int fib(int n) {
	if (n==0) return 0;
	if (n==1) return 1;
	return fib(n-1) + fib(n-2);
	
} 



int main() {
	int n;
	cin >> n;
	cout << fib(n);
	return 0;
}