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
    int reverseInt(int x) {
        int ans = 0, rem = 0;
        while(x){
            rem = x%10;
            ans = (1LL * ans * 10) + rem;
            x/=10;
        }
        cout << ans;
        return ans;
    }
    bool isPalindrome(int x) {
        if (x < 0) return false;
        return x == reverseInt(x) ? true : false;
    }
};


bool isPalindrome(int x) {
        if (x < 0) return false;
        int originalNumber = x, reverseNumber = 0, reminder = 0;
        while (x) {
            reminder = x%10;
            x/=10;
            if (reverseNumber > INT_MAX / 10) return false;
            reverseNumber = reverseNumber * 10 + reminder;
        }
        if (originalNumber == reverseNumber) return true;
	return false;
}
