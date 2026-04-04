#include <iostream>
#include <set>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    set<int> st = {a, b, c, d};

    cout << (st.size() == 3 && (a == c || b == d) ? "V" : "F") << endl;

    return 0;
}