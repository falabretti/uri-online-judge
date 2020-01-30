#include <bits/stdc++.h>

using namespace std;

int main() {

    //freopen("1257.in", "r", stdin);
    int n;
    cin >> n;

    while(n--) {
        int qnt_elem;
        int total = 0;

        cin >> qnt_elem;
        string elementos[qnt_elem];

        for(int i = 0; i < qnt_elem; i++) {
            cin >> elementos[i];
            for(int j = 0; j < elementos[i].size(); j++) {
                int pos = elementos[i][j] - 65;
                total += pos + i + j;
            }
        }
        cout << total << endl;
    }

    return 0;
}
