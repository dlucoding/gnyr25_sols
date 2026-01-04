#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> amt(3);
    for(int i=0; i<n; i++) {
        char c; cin >> c; int s; cin >> s;
        amt[c=='S'?0:(c=='M'?1:2)]+=s;
    }
    cout << (amt[0]+5)/6+(amt[1]+7)/8+(amt[2]+11)/12 << '\n';
    return 0;
}