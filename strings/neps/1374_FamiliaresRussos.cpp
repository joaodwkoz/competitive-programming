#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string ptrs[6] = {"evich", "ovich", "ich", "evna", "ovna", "ichna"};
string fms[6] = {"ev", "in", "ov", "eva", "ova", "ina"};

string get_ptr_without_suf(string ptr) {
    string suf = "";

    for (string p : ptrs) {
        if (ptr.ends_with(p)) {
            suf = p;
            break;
        }
    }

    ptr = ptr.substr(0, ptr.size() - suf.size());

    return ptr;
}

string get_fm_without_suf(string fm) {
    string suf = "";

    for (string f : fms) {
        if (fm.ends_with(f)) {
            suf = f;
            break;
        }
    }

    fm = fm.substr(0, fm.size() - suf.size());
    
    return fm;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, n;
    getline(cin, s);

    while (!s.empty() && s.back() == '\r') {
        s.pop_back();
    }

    stringstream ss(s);
    string _, ptr, fm;
    ss >> _ >> ptr >> fm;

    ptr = get_ptr_without_suf(ptr);    
    fm = get_fm_without_suf(fm);

    int __;
    cin >> __;

    int par = 0, irm = 0;
    while (getline(cin, n)) {
        while (!n.empty() && n.back() == '\r') {
            n.pop_back();
        }

        stringstream ns(n);
        string ___, curr_ptr, curr_fm;
        ns >> ___ >> curr_ptr >> curr_fm;

        curr_ptr = get_ptr_without_suf(curr_ptr);        
        curr_fm = get_fm_without_suf(curr_fm);

        par += (int)(curr_fm == fm);
        irm += (int)(curr_ptr == ptr && curr_fm == fm);
    }

    cout << par << " " << irm << endl;

    return 0;
}