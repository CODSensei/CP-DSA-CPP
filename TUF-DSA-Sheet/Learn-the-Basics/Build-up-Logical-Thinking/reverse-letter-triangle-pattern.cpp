#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	char a='A';
	for (int i = n; i>=1; i--){
		for(int j=1; j<=i;j++){
			cout << a << " ";
			a++;
		}
		cout << "\n";
		a='A';
	}
	return 0;
}