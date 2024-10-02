#include<bits/stdc++.h>
using namespace std;

int main() {
	long long A,B;
	cin >> A >> B;
	vector <long long> v;
	long long gcd = 1;
	long long lcm = 1;
    if (A < B){
        A = A+B;
        B=A-B;
        A=A-B;
    }
	for (int i = 1; i<=A; i++) {
		if (A%i == 0 && B%i == 0) {
			gcd = i;
		}
	}
	lcm = (A*B)/gcd;
	v.push_back(gcd);
	v.push_back(lcm);
	cout << v[0] << " " << v[1];
	return 0;
}