#include <iostream>

using namespace std;

struct Point {
    int x, y;
    Point(int x = 0, int y = 0) : x(x), y(y) {}
};

int dist(Point a, Point b) {
    return abs(b.x - a.x) + abs(b.y - a.y);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Point a, b;
    cin >> a.x >> a.y >> b.x >> b.y;

    cout << dist(a, b) << endl;

    return 0;
}