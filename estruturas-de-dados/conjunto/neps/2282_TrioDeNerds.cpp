#include <iostream>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b, c;
    cin >> a >> b >> c;

    set<string> st = {a, b, c};

    cout << (st.size() == 3 ? "S" : "N") << endl;

    return 0;
}