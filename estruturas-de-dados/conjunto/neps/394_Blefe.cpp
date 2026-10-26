#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    unordered_set<int> a, b;

    int x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        a.insert(x);
    }

    int inv = -1;
    for (int i = 1; i <= m; i++) {
        cin >> x;
        
        bool found = false;
        for (auto v : b){
            if (b.count(x - v)) { 
                found = true;
                break;
            }
        }

        if (!a.count(x) && !found && inv == -1) {
            inv = x;
        }

        b.insert(x);
    }

    cout << (inv == -1 ? "sim" : to_string(inv)) << endl;

    return 0;
}