#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

typedef long long ll;

struct Point {
    int x, y;
    Point(int xv = 0, int yv = 0) : x(xv), y(yv) {}
};

ll cross(Point a, Point b) {
    return 1LL * a.x * b.y - 1LL * a.y * b.x;
}

ll shoelace(vector<Point>& pts, int n) {
    ll s = 0;

    for (int i = 0; i < n; i++) {
        s += cross(pts[i], pts[(i + 1) % n]);
    }

    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<Point> pts(n);
    for (auto &x : pts) {
        cin >> x.x >> x.y;
    }  

    ll area2 = shoelace(pts, n), ans = abs(area2) / 2;

    cout << ans << endl;

    return 0;
}