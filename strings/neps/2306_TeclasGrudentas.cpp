#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string x;
    getline(cin, x);
    
    char last = '.';

    string ns = "";

    for (char y : x) {
        if (last != y) {
            ns += y;
        }

        last = y;
    }

    cout << ns << endl;
    
    return 0;
}