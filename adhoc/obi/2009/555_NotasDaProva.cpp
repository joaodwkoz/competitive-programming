#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;

    cout << (x == 0 ? 'E' : x <= 35 ? 'D' : x <= 60 ? 'C' : x <= 85 ? 'B' : 'A') << endl;

    return 0;
}