#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back  
  
void selectionSort(vector<int>& arr){
    for(int j = 0; j < arr.size() - 1; j++){
    //return the index of smallest element
        int index = j;
        for(int i = j + 1; i < arr.size(); i++){
            if(arr[i] < arr[index]) index = i;
        }
        swap(arr[j],arr[index]);
    }
    for(int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " ";
}

int main() {
  vi test = {5,3,6,2,1,7,4};
  selectionSort(test);
  return 0;
}