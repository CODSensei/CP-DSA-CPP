#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back
    
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

int main() {
   
   int n;
   cin >> n;
   cout << isPalindrome(n) << endl;

    return 0;
}