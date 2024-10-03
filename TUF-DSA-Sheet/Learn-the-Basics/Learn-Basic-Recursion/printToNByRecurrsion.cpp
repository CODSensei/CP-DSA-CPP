#include<bits/stdc++.h>
using namespace std;

int idk(int A){
	if (A>0){
		idk(A-1);
		cout << A << " ";		
	} 
	return 0;
}


int main() {
	int A;
	cin >> A;
	idk(A);
	return 0;
}