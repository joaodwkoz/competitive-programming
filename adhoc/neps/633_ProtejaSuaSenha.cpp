#include <iostream>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    pair<int, int> nums[11][5];
    char psws[11][6];

    int tc = 1;
    while (cin >> n && n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 5; j++) {
                cin >> nums[i][j].first >> nums[i][j].second;
            }
            for (int k = 0; k < 6; k++) {
                cin >> psws[i][k];
            }
        }

        cout << "Teste " << tc++ << endl;
        for (int k = 0; k < 6; k++) {
            int fst = nums[0][psws[0][k] - 'A'].first, sec = nums[0][psws[0][k] - 'A'].second;
            bool ok = 1;
            for (int i = 1; i < n; i++) {
                if (fst != nums[i][psws[i][k] - 'A'].first && fst != nums[i][psws[i][k] - 'A'].second) {
                    ok = 0;
                }
            }
            cout << (ok ? fst : sec) << " ";
        }
        cout << endl;
    }

    return 0;
}