#include <iostream>

using namespace std;

typedef long long ll;

struct Point {
    int x, y;
    
    Point(int x = 0, int y = 0) : x(x), y(y) {}
};

ll dot(Point& a, Point& b) {
    return 1LL * a.x * b.x + 1LL * a.y * b.y;
}

ll cross(Point& a, Point& b) {
    return 1LL * a.x * b.y - 1LL * a.y * b.x;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Point a, b;
    cin >> a.x >> a.y >> b.x >> b.y;

    cout << 1LL * dot(a, b) << " " << 1LL * cross(a, b);

    return 0;
}