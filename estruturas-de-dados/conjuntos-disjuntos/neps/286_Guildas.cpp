#include <iostream>
#include <vector>

using namespace std;

vector<int> rep;
vector<int> power;

int find(int x){
    if(rep[x] == x) return x;
    return rep[x] = find(rep[x]);
}

void unite(int x, int y){
    int repX = find(x);
    int repY = find(y);

    if(repX != repY){
        if(power[repX] < power[repY]){
            rep[repX] = repY;
            power[repY] += power[repX];
        } else if(power[repX] > power[repY]){
            rep[repY] = repX;
            power[repX] += power[repY];
        } else {
            rep[repY] = repX;
            power[repX] += power[repY];
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    while(cin >> n >> m && (n && m)){
        rep.resize(n + 1, -1);
        power.resize(n + 1, -1);

        int ans = 0;
        
        for(int i = 1; i <= n; i++){
            int p;
            cin >> p;

            rep[i] = i;
            power[i] = p;
        }

        for(int i = 1; i <= m; i++){
            int op, x, y;
            cin >> op >> x >> y;

            if(op == 1){
                unite(x, y);
            } else {
                int repX = find(x);
                int repY = find(y);

                if(power[repX] > power[repY]){
                    if(repX == find(1)) ans++;
                } else if(power[repX] < power[repY]) {
                    if(repY == find(1)) ans++;
                }   
            }
        }

        cout << ans << endl;
    }

    return 0;
}