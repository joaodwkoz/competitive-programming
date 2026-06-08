#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &x : arr) {
        cin >> x;
    }
    
    vector<int> aux = arr;
    
    sort(aux.begin(), aux.end());
    aux.erase(unique(aux.begin(), aux.end()), aux.end());

    int ans = 1, sz = aux.size();
    for (int i = 0; i < sz - 1; i++) {
        for (int j = i + 1; j < sz; j++) {
            int lst = -1, curr = 0;
            for (int val : arr) {
                if (((val == aux[i] || val == aux[j]) && val != lst)) {
                    curr++;
                    lst = val;
                } 
            }
            ans = max(ans, curr);
        }
    }

    cout << ans << endl;

    return 0;
}