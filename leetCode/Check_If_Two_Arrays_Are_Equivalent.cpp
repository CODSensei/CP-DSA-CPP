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
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a,b;
        for(int i = 0; i < word1.size(); i++){
            a += word1[i];
        }
        cout << "a: " << a;
        for(int i = 0; i < word2.size(); i++){
            b += word2[i];
        }
        cout << "b: " << b;
        if (a.size() != b.size()) return false;
        if (a == b) return true;
        return false;
    }
};

int main() {
    
    return 0;
}
