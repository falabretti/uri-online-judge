#include <bits/stdc++.h>
using namespace std;

map<int, string> roman_values() {
    map<int, string> m;
    m.insert(make_pair(1, "I"));
    m.insert(make_pair(4, "IV"));
    m.insert(make_pair(5, "V"));
    m.insert(make_pair(9, "IX"));
    m.insert(make_pair(10, "X"));
    m.insert(make_pair(40, "XL"));
    m.insert(make_pair(50, "L"));
    m.insert(make_pair(90, "XC"));
    m.insert(make_pair(100, "C"));
    m.insert(make_pair(400, "CD"));
    m.insert(make_pair(500, "D"));
    m.insert(make_pair(900, "CM"));

    return m;
}

int main() {
    map<int, string> m = roman_values();

    int n;
    cin >> n;

    string output = "";

    do {
        for (auto itr = m.rbegin(); itr != m.rend(); itr++) {
            if (itr->first <= n) {
                output += itr->second;
                n -= itr->first;
                break;
            }
        }
    } while (n > 0);

    cout << output << endl;

    return 0;
}
