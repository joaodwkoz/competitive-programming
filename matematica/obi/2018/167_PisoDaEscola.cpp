#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, c;
    cin >> l >> c;

    int a = l * c + ((l - 1) * (c - 1));
    int b = (l - 1) * 2 + (c - 1) * 2; 

    cout << a << endl << b << endl;

    return 0;
}