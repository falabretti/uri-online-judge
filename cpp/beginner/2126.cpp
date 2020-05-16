#include <bits/stdc++.h>
using namespace std;

int main() {
    int c = 1;
    string n, m;
    while (cin >> n >> m) {

        int last = -1;
        int next = 0;
        int count = 0;

        for (int i = 0; i <= m.size() - n.size(); i++) {
            int found = m.find(n, next);
            if (found == string::npos) break;

            last = found;
            next = found + 1;
            count++;
        }

        printf("Caso #%d:\n", c++);
        if (count > 0) {
            printf("Qtd.Subsequencias: %d\n", count);
            printf("Pos: %d\n", last + 1);
        } else {
            printf("Nao existe subsequencia\n");
        }
        printf("\n");
    }

    return 0;
}
