#include<bits/stdc++.h>
using namespace std;

int getSum(int n,int sum){
	if (n==0) return sum;
	sum+=n;
	getSum(n-1,sum);
}


int sumOfSeries(int A){
	// return getSum(A,0);
	if (A==0) return 0;
	return pow(A,3) + sumOfSeries(A-1);
}


int main() {
	int A;
	// int sum = 0;
	cin >> A;
	cout << sumOfSeries(A);
	return 0;
}