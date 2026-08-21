#include <iostream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

string pad(int x, int sz) {
    string newx = to_string(x);
    
    return string(sz - newx.size(), '0') + newx;
}

int diff(int x) {
    string padx = pad(x, 4);

    sort(padx.begin(), padx.end());
    int x1 = stoi(padx);
    
    reverse(padx.begin(), padx.end());
    int x2 = stoi(padx);

    return x2 - x1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<int> twr;
    int curr = n;
    while (!twr.count(curr)) {
        twr.insert(curr);
        
        cout << curr << endl;
        
        curr = diff(curr);
    }

    return 0;
}