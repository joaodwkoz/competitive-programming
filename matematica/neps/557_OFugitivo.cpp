#include <iostream>

using namespace std;

typedef long long ll;

struct Point {
    int x, y;
    Point(int x = 0, int y = 0) : x(x), y(y) {}
};

ll sqdist(Point& a) {
    int dx = a.x;
    int dy = a.y;
    return 1LL * dx * dx + dy * dy;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    Point a(0, 0);

    bool away = false;
    for (int i = 1; i <= n; i++) {
        char dir;
        int num;
        cin >> dir >> num;

        if (!away) {
            if (dir == 'N') {
                a.y += num;
            } else if (dir == 'O') {
                a.x -= num;
            } else if (dir == 'L') {
                a.x += num;
            } else if (dir == 'S') {
                a.y -= num;
            }

            if (sqdist(a) > 1LL * m * m) {
                away = true;
            }
        }
    }

    cout << away << endl;

    return 0;
}