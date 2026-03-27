#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, d, a;
    cin >> n >> d >> a;

    cout << (d < a ? n - a + d : d - a) << endl;

    return 0;
}