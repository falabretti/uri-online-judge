#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    //freopen("2062.in", "r", stdin);
    int n;
    cin >> n;

    string entrada[n];

    for(int i = 0; i < n; i++) {
        cin >> entrada[i];

        int tam = entrada[i].size();

        if(tam == 3 and (entrada[i][0] == 'U' and entrada[i][1] == 'R')) {
                cout << "URI";
            }
        else if(tam == 3 and (entrada[i][0] == 'O' and entrada[i][1] == 'B')) {
                cout << "OBI";
        } else {
            cout << entrada[i];
        }
        if(i != n - 1) {
            cout << ' ';
        }
    }
    cout << endl;

    return 0;
}

