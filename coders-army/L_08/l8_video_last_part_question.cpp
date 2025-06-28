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
    for (int row = 1; row <= n; row++){
        char a = 'A';
       for(int col = 1; col <= n-row; col++) cout << "  ";
        for(int col = 1; col <=2*row-1; col++) cout << "* " ;
        cout << endl;
    }
}