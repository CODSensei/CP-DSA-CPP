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
        for(int col = 1; col <= row; col++) cout << char(a+col-1) << " " ;
        cout << endl;
    }
    cout << endl << endl;

    for (int row = 1; row <= n; row++){
       for(int col = 1; col <= n-row; col++) cout << "  ";
        for(char col = 'A'; col <= 'A'+row-1; col++) cout << col << " " ;
        cout << endl;
    }
}