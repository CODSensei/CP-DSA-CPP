#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back



    
int main() {
    for (int row = 1; row <= 5; row++){
        for (char col = 1; col <= row; col++) {
            char a = 'A' + col - 1;
            cout << a << " ";
        }
        cout << endl;
    }
}