#include <bits/stdc++.h>

using namespace std;

map<string, string> dict = {
    { "esquerda", "ingles"},
    { "direita", "frances"},
    { "nenhuma", "portugues"},
    { "as duas", "caiu"}
};

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;

    while (getline(cin, s)) {
        cout << dict[s] << endl;
    }

    return 0;
}
