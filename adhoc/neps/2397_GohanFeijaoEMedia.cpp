#include <iostream>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, p = 0, h = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        ll x, y;
        cin >> x >> y;
        p += x;
        h += y;
    }

    cout << (h > p ? ":0 <- Gohan e Feijao" : h == p ? "Impasse" : ":0 <-X- Gohan e Feijao") << endl;

    return 0;
}