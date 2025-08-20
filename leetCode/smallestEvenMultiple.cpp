#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;
typedef vector<char> vc;

//Macros
#define pb push_back

class Solution {
public:
    int smallestEvenMultiple(int n) {
        int temp = n * 2;
        for(int i = 1; i <= temp; i++){
            if (i%2 == 0 && i%n == 0){
                return i;
            }
        }
        return 0;
    }
};

int main() {
    
    return 0;
}
