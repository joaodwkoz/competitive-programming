#include <iostream>

using namespace std;

struct Dimension {
    int w, h;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Dimension al;
    cin >> al.w >> al.h;

    Dimension f1, f2;
    cin >> f1.w >> f1.h >> f2.w >> f2.h;

    bool l1 = f1.w + f2.w <= al.w && max(f1.h, f2.h) <= al.h;
    bool l2 = f1.h + f2.w <= al.w && max(f1.w, f2.h) <= al.h;
    bool l3 = f1.w + f2.h <= al.w && max(f1.h, f2.w) <= al.h;
    bool l4 = f1.h + f2.h <= al.w && max(f1.w, f2.w) <= al.h;
    bool c1 = f1.h + f2.h <= al.h && max(f1.w, f2.w) <= al.w;
    bool c2 = f1.w + f2.h <= al.h && max(f1.h, f2.w) <= al.w;
    bool c3 = f1.h + f2.w <= al.h && max(f1.w, f2.h) <= al.w;
    bool c4 = f1.w + f2.w <= al.h && max(f1.h, f2.h) <= al.w;

    cout << (l1 || l2 || l3 || l4 || c1 || c2 || c3 || c4 ? "S" : "N") << endl;

    return 0;
}