#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back  
  
void selectionSort(vector<int>& arr){
    for(int i = 0; i < arr.size() - 1; i++){
        // return index of largest element
        int index = i;
        for(int j = i + 1; j < arr.size(); j++){
            if(arr[j] > arr[index]) index = j;
        }
        swap(arr[i],arr[index]);
    }
    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}

int main() {
  vi test = {5,3,6,2,1,7,4};
  selectionSort(test);
  return 0;
}