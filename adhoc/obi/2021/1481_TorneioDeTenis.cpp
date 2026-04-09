#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt = 0;

    for (int i = 0; i < 6; i++) {
        char x;
        cin >> x;
        cnt += (int)(x == 'V');
    }

    cout << (cnt >= 5 ? 1 : cnt >= 3 ? 2 : cnt >= 1 ? 3 : -1) << endl;
    
    return 0;
}