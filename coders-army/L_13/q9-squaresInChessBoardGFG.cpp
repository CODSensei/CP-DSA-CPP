#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back
    
 long long squaresInChessBoard(long long N) {
        // code here
        long long sum = 0;
        for (long long i = 1; i <= N; i++){
            sum = sum + (i*i);
        }
        return sum;
    }

int main() {
   
   int n;
   cin >> n;
   cout << squaresInChessBoard(n) << endl;

    return 0;
}