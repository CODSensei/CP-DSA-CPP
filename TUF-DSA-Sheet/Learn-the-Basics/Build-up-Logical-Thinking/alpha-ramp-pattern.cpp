#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	char a='A';
	for (int i = 1; i<=n; i++){
		for(int j=1; j<=i;j++){
			cout << a << " ";
		}
		cout << "\n";
		a++;
	}
	return 0;
}