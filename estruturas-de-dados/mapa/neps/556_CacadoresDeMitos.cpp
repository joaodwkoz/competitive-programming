#include <iostream>
#include <map>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<pair<int, int>, int> freq;
    int ans = 0;
    
    for(int i = 1; i <= n; i++){
        int x, y;
        cin >> x >> y;

        freq[{x, y}]++;
        if(freq[{x, y}] > 1){
            ans = 1;
        }
    }

    cout << ans << endl;

    return 0;
}