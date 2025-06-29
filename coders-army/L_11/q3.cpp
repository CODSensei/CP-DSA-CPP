#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back
    
int main() {
    
    int n, i = 1,j=1; 
    cin >> n;
    while(i <= n){
        if (i%3==0 || i%5==0) {   
            i++;
            continue;
    }
        cout << i << endl;
        i++;
     
    }


    do {
        if (j%3==0 || j%5==0) {
            j++;
            continue;
        }
        cout << j << " ";
        j++;
    } while(j <= n);

    return 0;
}