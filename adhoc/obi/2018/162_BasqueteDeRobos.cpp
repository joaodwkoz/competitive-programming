#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int d;
    cin >> d;

    cout << (d <= 800 ? 1 : d <= 1400 ? 2 : 3) << endl;
        
    return 0;
}