#include <iostream>
#include <map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s;
    cin >> n >> s;

    map<int, int> freq;
    freq[0] = 1;

    int ans = 0, curr = 0, x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        curr += x;
        ans += freq[curr - s];
        freq[curr]++;
    }

    cout << ans << endl;

    return 0;
}