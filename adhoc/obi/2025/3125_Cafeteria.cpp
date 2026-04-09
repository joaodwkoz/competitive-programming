#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int curr = 0;
    while (curr < c) {
        curr += d;

        int res = c - curr;
        
        if (res >= a && res <= b) {
            cout << "S" << endl;
            return 0;
        }
    }

    cout << "N" << endl;
    
    return 0;
}