#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;

    stack<int> st;
    for (int i = 1; i <= k; i++) {
        int x;
        cin >> x;
        if (!x) {
            st.pop();
        } else {
            st.push(x);
        } 
    }

    int s = 0;
    while (!st.empty()) {
        s += st.top();
        st.pop();
    }
    
    cout << s << endl;

    return 0;
}