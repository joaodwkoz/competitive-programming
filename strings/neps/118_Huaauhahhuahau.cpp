#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string x;
    cin >> x;

    x.erase(remove_if(x.begin(), x.end(), [](char x){
        return x != 'a' && x != 'e' && x != 'i' && x != 'o' && x != 'u';
    }), x.end());

    string a = x;
    string b = x;
    reverse(b.begin(), b.end());

    cout << (a == b ? "S" : "N") << endl;

    return 0;
}