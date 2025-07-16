#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back  
  
class Solution {
  public:
    int search(vector<int>& arr, int x) {
        // code here
        int index = -1;
        for(int i = 0; i < arr.size(); i++){
            if (arr[i] == x) {
                index = i;
                break;
            }
        }
        return index;
    }
};

int main() {
  

   
  return 0;
}