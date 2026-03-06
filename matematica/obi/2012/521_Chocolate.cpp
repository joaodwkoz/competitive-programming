#include <iostream>
#include <cmath>

using namespace std; 

int main() { 
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 

    int n;
    cin >> n;

    int ans = floor(double(log(n)) / double(log(2)));

    cout << (1 << (ans * 2)) << endl;

    return 0; 
}