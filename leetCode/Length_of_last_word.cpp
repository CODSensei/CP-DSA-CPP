#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;
typedef vector<char> vc;

//Macros
#define pb push_back

class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> st;
        string temp = "";
        for(int i = 0; i < s.size(); i++){
            if (s[i] != ' ' && i <= s.size() - 1){
                temp += s[i];
            }
            else if (s[i] == ' ' && temp != ""){
                st.push_back(temp);
                temp = "";
            }
            if (i == s.size() - 1 && temp != ""){
                st.push_back(temp);
                break;
            }
        }
        return st[st.size() - 1].size();
    }
};

int main() {
    
    return 0;
}
