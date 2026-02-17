#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int f, c, e, b;
    cin >> f >> c >> e >> b;

    b--;

    int fil = b / c + e;
    int ac = b % c;

    cout << (fil > f ? "PROXIMO VOO" : (to_string(fil) + " " + string(1, ((char) ac + 'A')))) << endl;
 
    return 0;
}