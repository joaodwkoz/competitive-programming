#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct Point {
    int x, y;
};

int sqDist(Point a, Point b) {
    int nx = b.x - a.x;
    int ny = b.y - a.y;
    return nx * nx + ny * ny;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fixed << setprecision(2);

    Point a, b;
    cin >> a.x >> a.y >> b.x >> b.y;

    int dist2 = sqDist(a, b);
    double ans = sqrt(dist2);

    cout << ans << endl;
    
    return 0;
}