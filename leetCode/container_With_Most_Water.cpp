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
    int maxArea(vector<int>& height) {
        int max_area = 0, current_area = 0, i = 0, j = height.size() - 1;
        while(i < j){
            current_area = min(height[i],height[j]) * (j - i);
            max_area = max(max_area,current_area);
            if (height[i] < height[j]) i++;
            else j--;
        }
        
        return max_area;
    }
};

int main() {
    
    return 0;
}
