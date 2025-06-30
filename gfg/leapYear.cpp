#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back
    
bool checkYear(int n) {
        // code here
        if (n%400==0) return true;
        if (n%4==0 && n%100!=0) return true;
        else return false;
    }

int main() {
    
   
   int n;
   cin >> n;
    cout << checkYear(n) << endl;

    return 0;
}