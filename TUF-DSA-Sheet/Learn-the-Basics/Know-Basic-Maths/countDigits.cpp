#include<bits/stdc++.h>
using namespace std;

int main() {
	int evenlyDivides(int);
	int t;
	cin >> t;
	cout << evenlyDivides(t);
	

	return 0;
}

int evenlyDivides(int N) {
	int counter = 0;
	int s = N;
	while(s){
		int last_digit = s%10;
		if (last_digit !=0)
		if (N%last_digit == 0) counter++;
		s/=10;
	}
	return counter;
}
