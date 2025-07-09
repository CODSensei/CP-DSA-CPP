#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back

int setBits(int n) {
        // Write Your Code here
        int ans = 0, reminder = 0, counter = 0,mul=1;
        while(n){
            reminder = n%2;
            n = n/2;
            if (reminder == 1) counter++;
            ans = reminder* mul  + ans;
            mul = mul * 10;
        }
        return counter;
    }

int main() {
   
   int n;
   cin >> n;
   cout << setBits(n) << endl;

   return 0;
}