#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n;
    cin >> k >> n;
    
    vector<int> arvs(n);
    for (int &x : arvs) cin >> x;
    sort(arvs.begin(), arvs.end());

    int sm = accumulate(arvs.begin(), arvs.end(), 0);
    int aux = 0;
    int ptr = 0;
    long long ans = 0;

    for (int i = 1; i <= k; i++) {
        char x;
        cin >> x;

        if (x == 'C') {
            aux++;
        } else {
            aux--;
        }

        while (ptr < n && arvs[ptr] + aux <= 0) sm -= arvs[ptr++];
        
        int qtd = n - ptr;

        ans += sm + 1LL * aux * qtd;
    }

    cout << ans << endl;

    return 0;
}