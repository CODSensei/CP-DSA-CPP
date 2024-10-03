#include<bits/stdc++.h>
using namespace std;

int idk(int A){
	if (A>0){
		cout << "GFG " << " ";		
		idk(A-1);
	} 
	return 0;
}


int main() {
	int A;
	cin >> A;
	idk(A);
	return 0;
}