#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back

int solve(int A, int B) {
    int topLeft, topRight, bottomLeft, bottomRight, totalMoves = 0;
    topLeft = min(A - 1, B - 1);
    topRight = min(A - 1, 8 - B);
    bottomLeft = min(8 - A, B - 1);
    bottomRight = min(8 - A, 8 - B);
    totalMoves = topLeft + topRight + bottomLeft + bottomRight;
    return totalMoves;
}

int main() {
   
   int a,b;
   cin >> a >> b;
   cout << solve(a,b) << endl;

   return 0;
}