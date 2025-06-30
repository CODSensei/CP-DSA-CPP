#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back
    
int addDigits(int num) {
    while (num > 9){
        int ans = 0, rem = 0;
        while(num > 0){
             rem = num % 10;
            num /= 10;
            ans = rem + ans;
        }
        num = ans;
    }
    return num;
}

int main() {
    
   
   int n;
   cin >> n;
    cout << addDigits(n) << endl;

    return 0;
}