#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    int ponts[3] = {a, b, c};
    sort(ponts, ponts + 3);

    cout << ponts[1] << endl;

    return 0;
}