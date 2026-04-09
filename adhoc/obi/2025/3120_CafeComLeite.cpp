#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int res = c - d;

    cout << ((res >= a && res <= b) ? "S" : "N") << endl;
    
    return 0;
}