#include <iostream>
#include <string>

using namespace std;

int jgs[2], at[2], sc;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string g;
    cin >> g;

    for (char p : g) {
        if (p == 'S') {
            at[sc]++;
        } else if (p == 'R') {
            sc = 1 - sc;
            at[sc]++;
        } else if (p == 'Q') {
            if (jgs[0] == 2 || jgs[1] == 2) {
                cout << jgs[0] << " " << (jgs[0] == 2 ? "(winner) " : "") << "- " << jgs[1] << " " << (jgs[1] == 2 ? "(winner)" : "") << endl;
            } else {
                cout << jgs[0] << " (" << (to_string(at[0]) + (sc == 0 ? "*" : "")) << ") - " << jgs[1] << " (" << (to_string(at[1]) + (sc == 1 ? "*" : "")) << ")" << endl;
            }
        }

        if ((at[sc] >= 5 && at[sc] - at[1 - sc] >= 2) || (at[sc] == 10)) {
            jgs[sc]++;
            at[sc] = 0;
            at[1 - sc] = 0;
        }
    }

    return 0;
}