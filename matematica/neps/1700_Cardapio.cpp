#include <iostream>
#include <iomanip> 

using namespace std;

double prcs[4] = {6.9, 7.3, 4.5, 5.7};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fixed << setprecision(2);

    int c, q;
    cin >> c >> q;

    cout << "O valor total da compra e R$ " << prcs[c - 1] * q << endl;
 
    return 0;
}