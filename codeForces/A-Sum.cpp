#include<bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c,t;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> a >> b >> c;
		if ((a+b)==c)
			cout << "YES" << "\n";
		else if ((b+c) == a)
			cout << "YES" << "\n";
		else if ((a+c)==b)
			cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}
	return 0;
}