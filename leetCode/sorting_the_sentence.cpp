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
    string sortSentence(string s) {
        vector<string> temp;
        string currentWord = "", result = "";

        // breaking of stirng and storing it in temp array
        for (char ch : s) {
            if (ch == ' ') {
                temp.push_back(currentWord);
                currentWord = "";
            } else {
                currentWord += ch;
            }
        }
        temp.push_back(currentWord);

        vector<string> ans(temp.size());

        for (int i = 0; i < temp.size(); i++) {
            // find in the index where element to be placed 
            // har ek word ke size() nikalke uske end pe gya 
            int number = temp[i][temp[i].size() - 1] - '0'; 

            // sirf word ko jodha
            string c = "";
            for(int j = 0; j < temp[i].size() - 1; j++){
                c += temp[i][j];
            }

            // word ko ans array ke us position pe daala
            ans[number - 1] = c;            
        }
        
        // ans array ke sare words ko jodha
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " " ;
            result += ans[i];
            if (i != ans.size() - 1) result += " ";
        }
        return result;
    }
};

int main() {
    
    return 0;
}
