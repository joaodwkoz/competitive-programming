#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, c;
    cin >> l >> c;

    cout << (((l + c) % 2) ^ 1) << endl;

    return 0;
}