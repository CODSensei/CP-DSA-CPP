#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back
    
int reverse(int x) {
    int reverse = 0;
    
    while(x){
        int last=x%10;
        x/=10;
        if (reverse>INT_MAX/10 || reverse<INT_MIN/10) return 0;
        reverse = (reverse*10) + last;
    }
    return reverse;
}

int main() {
   
   int n;
   cin >> n;
   cout << reverse(n) << endl;

    return 0;
}