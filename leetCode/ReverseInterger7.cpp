#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin	>> n;
	int reverse = 0;
	if (n>INT_MAX || n<INT_MIN) return 0;
	while(n){
		int last=n%10;
		n/=10;
		reverse = (reverse*10) + last;
	}
	cout << reverse;
	return 0;
}

