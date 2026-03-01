#include <iostream>

using namespace std;

string rand_word(int word_idx) {
    string word = "";
    
    while (word_idx > 0) {
        word += (word_idx % 26) + 'a';
        word_idx /= 26;
    }

    return word;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= max(n, m / 2); i++) {
        cout << rand_word(i) << " ";
    }
    cout << endl;

    return 0;
}