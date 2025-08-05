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
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int unplace = 0;
        int arr[100] = {0};
        for(int i = 0; i < fruits.size(); i++){
            int placed = 0;
            for(int j = 0; j < baskets.size(); j++){
                if (baskets[j] >= fruits[i] && arr[j] == 0) {
                    arr[j] = 1;
                    placed = 1;
                    break;
                } 
            }
            if (placed == 0) unplace++;
        }
        return unplace;
    }
};

int main() {
  // vector<char> test = {'a', 'b', 'f','d','A','e','q','z','y'};
  vector<int> test = {8, 3, 0,1,9,4,2,5,6};
  binarySearch(test, 9);
  return 0;
}