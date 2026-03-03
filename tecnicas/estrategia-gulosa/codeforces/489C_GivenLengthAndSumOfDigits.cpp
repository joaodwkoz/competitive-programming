#include <iostream>
#include <string>
#include <algorithm>

using namespace std; 

typedef long long ll;

int m, s;

string max_num() {
    string ans = "";

    int curr_s = s;
    for (int i = 1; i <= m; i++) {
        int val = max(min(9, curr_s), 0);
        curr_s -= val;
        ans += char(val + '0');
    }

    return ans;
}

string min_num() {
    string ans = "";

    int curr_s = s;
    for (int i = 1; i <= m; i++) {
        int val = min(max((i == 1 ? 1 : 0), curr_s - 9 * (m - i)), 9);
        curr_s -= val;
        ans += char(val + '0');
    }

    return ans;
}

int main() { 
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 

    cin >> m >> s;

    if (!s) {
        if (m == 1) {
            cout << "0 0" << endl;
        } else {
            cout << "-1 -1" << endl;
        }
        return 0;
    } else if (s > m * 9) {
        cout << "-1 -1" << endl;
        return 0;
    }

    string min_n = min_num();
    string max_n = max_num();

    cout << min_n << " " << max_n << endl;
    
    return 0; 
}