#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int x = a / 2 + 2;
    for(int i = 1; i <= x / 2; i++){
        int a = i, c = x - i;

        if(a >= 2 && c >= 2 && (a - 2) * (c - 2) == b){
            cout << a << " " << c;
            return 0;
        }
    }

    cout << "-1 -1" << endl;

    return 0;
}