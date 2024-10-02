#include<bits/stdc++.h>
using namespace std;

int idk(int A,int B){
	if (A==0)  return B;
	 if (A < B){
        A = A+B;
        B=A-B;
        A=A-B;
    }
	return idk(A-B,B);
}


int main() {
	int A,B;
	cin >> A >> B;
    if (A < B){
        A = A+B;
        B=A-B;
        A=A-B;
    }
    cout << idk(A,B) << endl;
	return 0;
}