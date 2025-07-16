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
    bool isValid(string word) {
        int n = word.length();
        int vowel = 0, consonent = 0;
        char vowels[5] = {'a','e','i','o','u'};
        char consonents[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
        char numbers[] = {'1','2','3','4','5','6','7','8','9','0'};
        char symbols[] = {'@','#','$'};
        if (n < 3) return false;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 5; j++){
                if (tolower(word[i])==vowels[j]) {
                    vowel++;
                    break;
                }
            }
            for(int j = 0; j < 21; j++){
                if (tolower(word[i])==consonents[j]) {
                    consonent++;
                    break;
                }
            }
             for(int j = 0; j < 10; j++){
                if (word[i]==numbers[j]) {
                    break;
                }
            }
             for(int j = 0; j < 3; j++){
                if (word[i]==symbols[j]) {
                    return false;
                }
            }
        }
        if(vowel && consonent) return true;
        return false;
    }
};  

int main() {
  

   
  return 0;
}