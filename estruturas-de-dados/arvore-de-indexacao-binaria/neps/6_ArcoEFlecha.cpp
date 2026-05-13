#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long euclidSquared(int x, int y){
    return 1LL * x * x + 1LL * y * y;
}

vector<int> bit;
int n;

void update(int idx, int val){
    for(; idx <= n; idx += idx & -idx){
        bit[idx] += val;
    }
}

long long sum(int idx){
    long long s = 0;
    
    for(; idx >= 1; idx -= idx & -idx){
        s += 1LL * bit[idx];
    }

    return s;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    bit.resize(n + 1, 0);
    vector<long long> pts(n + 1, 0);

    int x, y;
    for(int i = 1; i <= n; i++){
        cin >> x >> y;
        pts[i] = euclidSquared(x, y);
    }

    vector<long long> comp = pts;
    sort(comp.begin(), comp.end());
    comp.erase(unique(comp.begin(), comp.end()), comp.end());

    for(int i = 1; i <= n; i++){
        pts[i] = lower_bound(comp.begin(), comp.end(), pts[i]) - comp.begin() + 1;
    }

    long long ans = 0;
    for(int i = 1; i <= n; i++){
        ans += sum(pts[i]);
        update(pts[i], 1);
    }

    cout << ans << endl;

    return 0;
}