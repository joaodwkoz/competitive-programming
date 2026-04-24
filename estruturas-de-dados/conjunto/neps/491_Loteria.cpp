#include <iostream>
#include <set>

using namespace std;

int main(){	
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    set<int> st;
    
	   for (int i = 1; i <= 6; i++) {
        cin >> x;
        st.insert(x);
    }

    int ans = 0;
    for (int i = 1; i <= 6; i++) {
        cin >> x;
        ans += (int)(st.count(x));
    }

    if (ans >= 3) {
        string terms[4] = {"terno", "quadra", "quina", "sena"};
        cout << terms[ans - 3] << endl;
    } else {
        cout << "azar" << endl;
    }

    return 0;
}