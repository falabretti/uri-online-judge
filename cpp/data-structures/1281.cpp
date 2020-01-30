#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    while(n--) {
        
        cout << fixed << setprecision(2);
        
        int m;
        cin >> m;

        map<string, double> prices;

        while(m--) {
            string product;
            double price;

            cin >> product >> price;
            prices.insert(make_pair(product, price));
        }

        int p;
        cin >> p;

        double total = 0;

        while(p--) {
            string product;
            int amount;

            cin >> product >> amount;

            total += prices.at(product) * amount;
        }
        cout << "R$ " << total << endl;
    }

    return 0;
}