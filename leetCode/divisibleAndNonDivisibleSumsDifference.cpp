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
    int differenceOfSums(int n, int m) {
        int num1 = 0, num2 = 0;
        for(int i = 1; i <= n; i++){
            if (i%m == 0) num2 += i;
            else num1 += i;
        }
        return num1 - num2;
    }
};

int main() {
  vector<char> test = {'a', 'b', 'f','d','A','e','q','z','y'};
  selectionSort(test);
  return 0;
}