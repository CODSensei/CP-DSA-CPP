#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back



    
int main() {
    int n;
    cin >> n;
    char a = 'A';
    for (int row = 1; row <= n; row++){
        for(int col = 1; col <= n-row; col++) cout << "  ";
        for(int col = 1; col <= row; col++) cout << n-col+1 << " " ;
        a++;
        cout << endl;
    }
}