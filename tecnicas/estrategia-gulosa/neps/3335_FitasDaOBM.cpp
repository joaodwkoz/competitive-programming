#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    int a1[3] = {a, b, c};
    int a2[3] = {d, e, f};

    sort(a1, a1 + 3);
    sort(a2, a2 + 3);

    cout << ((a1[0] >= a2[0] && a1[1] >= a2[1] && a1[2] >= a2[2]) ? "S" : "N") << endl;

    return 0;
}