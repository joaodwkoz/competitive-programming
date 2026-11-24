#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <algorithm>

using namespace std;

struct Node{
    string nm;
    int dist;
};

const int MAXN = 110;

unordered_map<string, vector<string>> mp;
unordered_map<string, int> rel;
unordered_set<string> atrs;

vector<vector<string>> arts(MAXN);

void bfs(string start) {
    unordered_set<string> vis;
    vis.insert(start);

    queue<Node> q;
    q.push({ start, 0 });

    while (!q.empty()) {
        auto [atr, d] = q.front();
        q.pop();

        for (string fr : mp[atr]) {
            if (!(vis.count(fr))) {
                rel[fr] = d + 1;
                q.push({ fr, d + 1 });
                vis.insert(fr);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, tc = 1;
    while (cin >> n && n) {
        cin.ignore();

        string l;   
        for (int i = 1; i <= n; i++) {
            getline(cin, l);

            if (!l.empty() && l.back() == '.') {
                l.pop_back();
            }

            stringstream ss(l);
            string nm;
            while (getline(ss, nm, ',')) {
                while (!nm.empty() && nm.front() == ' ') {
                    nm.erase(0, 1);
                } 

                while (!nm.empty() && nm.back() == ' ') {
                    nm.pop_back();
                } 

                if (arts[i].size() >= 1) {
                    for (string atr : arts[i]) {
                        mp[atr].push_back(nm);
                        mp[nm].push_back(atr);
                    }
                }

                arts[i].push_back(nm);
                atrs.insert(nm);
            }
        }

        rel["P. Erdos"] = 0;
        bfs("P. Erdos");

        vector<string> aut(atrs.begin(), atrs.end());
        sort(aut.begin(), aut.end(), [&](string a, string b) {
            int posA = a.find(' ');
            int posB = b.find(' ');

            string stA = a.substr(0, posA), stB = b.substr(0, posB);
            string lstA = a.substr(posA + 1), lstB = b.substr(posB + 1);

            if (lstA != lstB) {
                return lstA < lstB;
            }

            return stA < stB;
        });

        cout << "Teste " << tc++ << endl;

        for (auto atr : aut) {
            if (atr != "P. Erdos") {
                cout << atr << ": " << ((rel.count(atr)) ? to_string(rel[atr]) : "infinito") << endl;
            }
        }

        mp.clear();
        rel.clear();
        atrs.clear();

        for (auto& v : arts) {
            v.clear();
        }
        cout << endl;
    }

    return 0;
}