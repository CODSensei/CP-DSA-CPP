#include<bits/stdc++.h>
using namespace std;

int main() {
	int scoreOfString(string);
	string s; 
	cin >> s;
	cout << scoreOfString(s);
	return 0;
}

int scoreOfString(string s) {
        int score = 0;
        for(int i= 0; i<s.length()-1; i++){
            if (s[i] > s[i+1]) {
                int c = (int)(s[i] - s[i+1]);
                score += c;
            }
            else{


                int c = (int)(s[i+1] - s[i]);
                score +=c;
        }}
        return score;}