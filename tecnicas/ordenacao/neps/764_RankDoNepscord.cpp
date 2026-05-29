#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    map<string, int> lst;
    map<string, int> msgs;
    for (int i = 1; i <= n; i++) {
        string s;
        int x;
        cin >> s >> x;
        if (!lst.count(s) || x - lst[s] >= k) {
            lst[s] = x;
            msgs[s]++;
        }
    }

    vector<pair<int, string>> aux;
    for (auto [u, q] : msgs) {
        aux.push_back({ q, u });
    }

    sort(aux.begin(), aux.end(), [](const pair<int, string> &a, const pair<int, string> &b){
        if (a.first != b.first) {
            return a.first > b.first;
        } 
        return a.second < b.second;
    });

    int cl = 1;
    cout << "--Rank do Nepscord--" << endl;
    for (auto [q, u] : aux) {
        cout << "#"  << cl++ << ". " << u << " - Nivel " << (q * 25) / 100 + 1 << endl;
        if (cl == 4) {
            break;
        }
    }

    for (int i = cl; i <= 3; i++) {
        cout << "#" << i << "." << endl;
    }

    return 0;
}