#include <iostream>
#include <set>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        string x;
        cin >> x;
        set<char> s;
        bool isValid = true;
        for (int j = 0; j < x.size(); j++) {
            if (!(j % 7) && j) {
                s.clear(); 
            }
            if (s.count(x[j])) isValid = false;
            s.insert(x[j]);          
        }
        cout << (isValid ? "Valid bag" : "Invalid bag") << endl;
    }

    return 0;
}