#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back



    
int main() {
    int n, first = 0, second = 1;
    cin >> n;
    int fibonacci = 0;
    for (int i = 1; i<=n; i++){
        if (i == 1) cout << first << "\t";
        else if (i == 2 ) cout << second << "\t";
        fibonacci = first + second;
        first = second;
        second = fibonacci;
        cout << fibonacci << "\t";
    }
}