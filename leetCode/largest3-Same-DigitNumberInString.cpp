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
    string largestGoodInteger(string num) {
        string ans = "", temp = "";
        int i = 0, j = 0, n = num.size();
        while (i <= n - 3) {
            j = i + 1;
            if (num[i] != num[j]){
                i++;
                continue;
            }
            if (num[i] == num[j] && num[i] == num[j + 1] && num[j] == num[j + 1]) {
                temp += num[i];
                temp += num[j];
                temp += num[j+1];
                ans = max(ans, temp);
                temp = "";
            }
            i++;
        }
        return ans;
    }
};

int main() {
  // vc test = {'a', 'b', 'f','d','A','e','q','z','y'};
  // vi test = {2,3,4,7,11};
  cout << Solution().largestGoodInteger("6777133339");
  return 0;
}
