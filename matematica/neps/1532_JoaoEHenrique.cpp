#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fixed << setprecision(2);

    double x;
    cin >> x;

    cout << "Joao e Henrique devem guardar R$ " << x * 2 * 0.85  << endl;
 
    return 0;
}