#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back



    
int main() {
    for (int row = 1; row <= 4; row++){
        char a = 'A';
        for (char col = 4; col >= row; col--) {
            cout << a++ << " ";
        }
        cout << endl;
    }
}