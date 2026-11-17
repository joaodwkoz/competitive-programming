#include <iostream>

using namespace std;

typedef long long ll;

struct Point {
    int x, y;

    Point(int xv = 0, int yv = 0) : x(xv), y(yv) {}

    Point operator - (const Point& p) const {
        return Point(x - p.x, y - p.y);
    }
};

ll cross(Point a, Point b) {
    return 1LL * a.x * b.y - 1LL * a.y * b.x;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Point a, b, c, ac, ab;
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;

    ac = c - a, ab = b - a;

    cout << (cross(ab, ac) > 0 ? "1" : "-1") << endl;

    return 0;
}