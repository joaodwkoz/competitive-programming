#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int g, p, s;
    while (cin >> g >> p && (g || p)) {
        vector<vector<int>> cs(g, vector<int>(p));

        for (int i = 0; i < g; i++) {
            for (int j = 0; j < p; j++) {
                cin >> cs[i][j];
            }     
        }   
            
        cin >> s;

        vector<vector<int>> ss(s, vector<int>(p, 0));

        int k;
        for (int i = 0; i < s; i++) {
            cin >> k;

            for (int j = 0; j < k; j++) {
                cin >> ss[i][j];
            }
        }

        for (int i = 0; i < s; i++) {
            vector<int> scs(p, 0);

            for (int j = 0; j < g; j++) {
                for (int k = 0; k < p; k++) {
                    scs[k] += ss[i][cs[j][k] - 1];
                }
            }
                
            int mx = *max_element(scs.begin(), scs.end());

            vector<int> vcs;
            for (int i = 0; i < p; i++) {
                if (scs[i] == mx) {
                    vcs.push_back(i + 1);
                }
            }
                

            sort(vcs.begin(), vcs.end());

            for (int vc : vcs) {
                cout << vc << " ";
            }
            cout << endl;
        }
    }

    return 0;
}