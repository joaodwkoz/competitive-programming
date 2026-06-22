#include <iostream> 

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int j = 0, a = 0, i = 0, x;
    for (int k = 1; k <= n; k++) {
        cin >> x;
        if (x == 1) {
            a++;
        } else if (x == 2) {
            i++;
            j++;
        }
    }

    cout << "Jovem: " << j << endl << "Adulta: " << a << endl << "Idosa: " << i << endl;
 
    return 0;
}