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
    bool possible(vector<int>& arr) {
        // code here.
        int arrSum = 0;
        for(int i = 0; i < arr.size(); i++){
            arrSum += arr[i];
        }
        for(int i = 0; i < arr.size(); i++){
            arrSum -= i + 1;
        }
        return arrSum == 0 ? true : false;
        
    }
};

int main() {
    
    return 0;
}
