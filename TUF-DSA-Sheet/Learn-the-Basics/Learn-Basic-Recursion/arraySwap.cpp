#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back

int main() {
	// int n;
	// cin >> n;
	vi v;
	v = {1,2,3,4,5};
	int i=0;
	int j=v.size()-1;
	// cout << i << j;
	while(i!=j){
		v[i] = v[i]+v[j];
		v[j] = v[i]-v[j];
		v[i] = v[i]-v[j];
		i++;j--;
	}
	for (auto it = v.begin(); it!=v.end(); it++) {
		cout << *(it) << " ";
	}
	return 0;
}