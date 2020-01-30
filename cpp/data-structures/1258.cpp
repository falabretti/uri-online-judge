#include <bits/stdc++.h>

using namespace std;

struct Order {
    string name;
    string color;
    char size;
};

int main() {

    // freopen("entrada.in", "r", stdin);
    // freopen("saida.txt", "w", stdout);
    int n;

    bool first = true;

    while(cin >> n) {
        if(n == 0) break;
        
        if(first) first = false;
        else cout << endl;

        Order orders[n];

        for(int i = 0; i < n; i++) {
            cin.get();
            getline(cin, orders[i].name);
            cin >> orders[i].color >> orders[i].size;
        }

        sort(orders, orders + n, [](Order a, Order b) {

            if(a.color == b.color) {
                if(a.size == b.size) return a.name < b.name;
                return a.size > b.size;
            }

            return a.color < b.color;
        });

        for(Order p : orders) {
            cout << p.color << ' ' << p.size << ' ' << p.name << endl;
        }        
    }

    return 0;
}