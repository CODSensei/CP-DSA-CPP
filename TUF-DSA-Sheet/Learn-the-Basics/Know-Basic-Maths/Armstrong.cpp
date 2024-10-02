#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int temp = n;
	int counter = 0;
	int amstrong = 0;
	while(n) {
		n/=10;
		counter++;
	}
	n = temp;
	while(n) {
		amstrong = amstrong + pow(n%10,counter);
		n/=10;
	}
	if(temp == amstrong){
		cout << "is Armstrong";
	}
	return 0;
}