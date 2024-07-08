#include<bits/stdc++.h>
using namespace std;

int main() {
    int w;
    cin >> w;
    if (w%2 == 0){
        int d = w/2;
        if (d%2 == 0) cout << "YES";
        else cout << "NO";
    } else cout << "NO";
    return 0;
}
    