#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back

int main() {
	// int *n;
	// cin >> *n;
	// cout << &n << "\n" << *n;
	string s;
	string reverseString = "";
	string originalStirng = "";
	getline(cin,s);
	for(int i = 0; i<s.length(); i++){
		if( s[i] != ' ' && iswalnum(s[i])) 
			originalStirng += tolower(s[i]);
	}
	cout << originalStirng << endl;
	for(int i = s.length()-1; i>=0; i--){
		if( s[i] != ' ' && iswalnum(s[i])) 
			reverseString += tolower(s[i]);
	}
	cout << reverseString << endl;
	if(reverseString == originalStirng) {
		cout << "True" << endl;
	} else {
		cout << "False" << endl;
	}
	return 0;
}