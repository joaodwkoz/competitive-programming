#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct P {
    int id, o, p, b;
    bool operator < (const P &other) const {
        if (o != other.o) {
            return o < other.o;
        } else if (p != other.p) {
            return p < other.p;
        } else if (b != other.b) {
            return b < other.b; 
        }   
        return id > other.id;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<P> ps(n);
    for (int i = 0; i < n; i++) {
        ps[i] = {i + 1, 0, 0, 0};
    }

    for (int i = 1; i <= m; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        ps[x - 1].o++;
        ps[y - 1].p++;
        ps[z - 1].b++;
    }

    sort(ps.rbegin(), ps.rend());

    for (auto p : ps) {
        cout << p.id << " ";
    }
    cout << endl;

    return 0;
}