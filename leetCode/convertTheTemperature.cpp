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
    vector<double> convertTemperature(double celsius) {
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.80 + 32.00;
        return {kelvin,fahrenheit};
    }
};

int main() {
  vector<char> test = {'a', 'b', 'f','d','A','e','q','z','y'};
  // vector<int> test = {8, 3, 0,1,9,4,2,5,6};
  bubbleSort(test);
  return 0;
}