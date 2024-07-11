#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i<=n; i++){
		for(int j=1; j<=i;j++)
			cout << j << " ";
		for(int k=1;k<=(n-i)*2;k++)
			cout << "  ";
		for (int j=i;j>=1;j--)
			cout << j << " ";
 
		cout << "\n";
	}
	return 0;
}