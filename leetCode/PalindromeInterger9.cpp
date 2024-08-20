#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	int x;
    n=x;
	int reverse = 0;
    if(n<0) return false;
	while(n){
		int last=n%10;
		n/=10;
		if (reverse>INT_MAX/10 || reverse<INT_MIN/10) return false;
		reverse = (reverse*10) + last;
	}
	cout << reverse;
	if(x == reverse)
		return true;
	else return false;
    
	return 0;
}

