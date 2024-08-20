#include<bits/stdc++.h>
using namespace std;


    int rtn(char c) {
        if (c == 'I') return 1;
        if (c == 'V') return 5;
        if (c == 'X') return 10;
        if (c == 'L') return 50;
        if (c == 'C') return 100;
        if (c == 'D') return 500;
        else return 1000;
    };
    int romanToInt(string s) {
        int result = 0;
        for(int i = 0; i < s.size(); i++){
             if (rtn(s[i]) < rtn(s[i+1])) {
             	//handler for index out of bound
                if (i+1 == s.size()) {
                    result += rtn(s[s.size() - 1]);
                    break;
                }
            result -= rtn(s[i]);
             } else result += rtn(s[i]);
        }

        
        return result;
    }


int main() {
	string s;
	cin >> s;
	cout << romanToInt(s);

	return 0;
}

