#include <iostream>
#include <set>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, x;
    cin >> n >> m;

    set<int> st;
    for (int i = 1; i <= m; i++) {
        cin >> x; 
        st.insert(x);
    }

    cout << n - st.size() << endl;

    return 0;
}