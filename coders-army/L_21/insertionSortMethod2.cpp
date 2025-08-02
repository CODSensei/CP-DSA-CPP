#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back  
  
// 1st method  
void insertionSort(vector<int> arr){
    for(int i = arr.size() - 2; i >= 0; i--){
        for(int j = i; j < arr.size() - 1; j++){
            if (arr[j] > arr[j+1]) swap(arr[j],arr[j+1]);
            else break;
        }
    }
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}

int main() {
  // vector<char> test = {'a', 'b', 'f','d','A','e','q','z','y'};
  vector<int> test = {8, 3, 0,1,9,4,2,5,6};
  insertionSort(test);
  return 0;
}