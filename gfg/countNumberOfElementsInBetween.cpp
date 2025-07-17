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
    int getCount(vector<int> &arr, int num1, int num2) {
        // Your code goes here.
        // Find num1
    int i = 0, n = arr.size();
    for (i = 0; i < n; i++)
        if (arr[i] == num1)
            break;

    // If num1 is not present or present at end
    if (i >= n-1)
        return 0;

    // Find num2
    int j;
    for (j = n-1; j >= i+1; j--)
        if (arr[j] == num2)
            break;

    // If num2 is not present
    if (j == i)
        return 0;

    // return number of elements between
    // the two elements.
    return (j - i - 1);
    }
};

int main() {
  

   
  return 0;
}