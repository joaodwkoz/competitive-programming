#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<string> nms(n);
    for (string &x : nms) {
        cin >> x;
    }

    sort(nms.begin(), nms.end());

    cout << nms[k - 1] << endl;
    
    return 0;
}