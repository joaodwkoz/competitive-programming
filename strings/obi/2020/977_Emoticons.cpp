#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string x;
    getline(cin, x);

    int div = 0, chat = 0;
    for (int i = 0; i <= x.size() - 3; i++) {
        string curr = x.substr(i, 3);
        div += (int)(curr == ":-)");
        chat += (int)(curr == ":-(");
    }

    cout << (div > chat ? "divertido" : div == chat ? "neutro" : "chateado") << endl;

    return 0;
}