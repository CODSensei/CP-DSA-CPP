#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back
    
int main() {
    
    int n, i = 2, c = 0;
    cin >> n;
    while (i < n){
        if (n%i==0) {
            cout << "Not prime" << endl;
            c++;
            break;
        }
        i++;
    }
    if (!c) cout << "prime" << endl;

    return 0;
}