#include <iostream>

using namespace std;

int get_val(int num) {
    if (num <= 17) {
        return 15;
    } else if (num <= 59) {
        return 30;
    }

    return 20;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    cout << get_val(a) + get_val(b) << endl;

    return 0;
}