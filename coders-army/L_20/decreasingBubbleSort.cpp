#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back  
  
// 1st method  
// void bubbleSort(vector<int> arr){
//     for(int i = 0; i < arr.size(); i++){
//         for(int j = 0; j < arr.size() - 1; j++){
//             if (arr[j] < arr[j+1]) swap(arr[j],arr[j+1]);
//         }
//     }
//     for(int i = 0; i < arr.size(); i++){
//         cout << arr[i] << " ";
//     }
// }

//2nd method
void bubbleSort(vector<int> arr){
    for(int i = arr.size() - 2; i >= 0; i--){
        for(int j = 0; j <= i; j++){
            if(arr[j] < arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}

int main() {
  // vector<char> test = {'a', 'b', 'f','d','A','e','q','z','y'};
  vector<int> test = {8, 3, 0,1,9,4,2,5,6};
  bubbleSort(test);
  return 0;
}