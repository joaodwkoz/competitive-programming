#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    set<string> st;
    for (int i = 1; i <= n; i++) {
        string x;
        cin >> x;
        if (st.count(x)) {
            cout << "A funcao nao eh boa." << endl;        
            return 0;
        }
        st.insert(x);
    }

    cout << "A funcao eh boa." << endl;

    return 0;
}