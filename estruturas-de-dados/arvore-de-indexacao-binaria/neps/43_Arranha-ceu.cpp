#include <iostream>
#include <vector>

using namespace std;

vector<int> bit;
int n;

void update(int idx, int x){
    while(idx <= n){
        bit[idx] += x;
        idx += idx & -idx;
    }
}

int query(int idx){
    int s = 0;
    
    while(idx > 0){
        s += bit[idx];
        idx -= idx & -idx;
    }

    return s;
}

int pointQuery(int idx){
    return query(idx) - query(idx - 1);
}

void setNewVal(int idx, int x){
    int oldVal = pointQuery(idx);
    int diff = x - oldVal;
    update(idx, diff);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> n >> k;

    bit.resize(n + 1);

    int x;
    for(int i = 1; i <= n; i++){
        cin >> x;
        update(i, x);
    }

    for(int i = 1; i <= k; i++){
        int op;
        cin >> op;

        if(!op){
            int x, y;
            cin >> x >> y;
            setNewVal(x, y);
        } else {
            int x;
            cin >> x;
            cout << query(x) << endl;
        }
    }

    return 0;
}