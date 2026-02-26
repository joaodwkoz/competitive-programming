#include <iostream>
#include <vector>

using namespace std;

int grid[4][4], s_l[4], s_col[4];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> grid[i][j];
            s_col[j] += grid[i][j];
            s_l[i] += grid[i][j];
        }
    }

    int exp_val = -1;
    bool magic = true;
    
    for (int val : s_l) {
        if (exp_val == -1) {
            exp_val = val;
        } else {
            if (val != exp_val) {
                magic = false;
                break;
            }
        }
    }
    
    for (int val : s_col) {
        if (val != exp_val) {
            magic = false;
            break;
        }
    }

    cout << (magic ? "magic" : "not magic") << endl;

    return 0;
}