#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; 
	cin >> n;
	for (int i = n-1; i >= 0; i--){
		for(int j = n-i; j>0;j--) cout << "*";
		for(int j = 2*i; j>0;j--) cout << " ";
		for(int j = n-i; j>0;j--) cout << "*";
		
		cout << "\n";
}
	for (int i = 1; i < n; i++){
		for(int j = 0; j <= n-i-1; j++) cout << "*";
		for(int j = 0; j < 2*i; j++) cout << " ";
		for(int j = 0; j <= n-i-1; j++) cout << "*";
		cout << "\n";
}
	
	
	return 0;
}