#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i=1; i<=n;i++){
		for(int j=0;j<n-i;j++)
			cout << "  ";
		for (int k=0;k<2*i-1;k++)
			cout << "* ";
		cout << "\n";
	}
	for(int i=n; i>=1;i--){
		for(int j=n-i;j>0;j--)
			cout << "  ";
			for (int k=2*i-1;k>0;k--)
				cout << "* ";
		cout << "\n";
	}
	return 0;
}