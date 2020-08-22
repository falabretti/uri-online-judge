#include <bits/stdc++.h>

using namespace std;

map<char, char> base_ref = {
    {'B', 'S'},
    {'S', 'B'},
    {'C', 'F'},
    {'F', 'C'}
};

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string rna;

    while (cin >> rna) {

        stack<char> rna_stack;
        int bindings = 0;

        for (char base : rna) {

            if (!rna_stack.empty() and base_ref[base] == rna_stack.top()) {
                rna_stack.pop();
                bindings++;
                continue;
            }

            rna_stack.push(base);
        }

        cout << bindings << endl;
    }

    return 0;
}
