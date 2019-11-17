#include <bits/stdc++.h>

using namespace std;

struct Palavra {
    string word;
    int pos;
};

int main() {

    // freopen("entrada.in", "r", stdin);
    // freopen("saida.txt", "w", stdout);
    int n;
    cin >> n;
    cin.get();

    while(n--) {
        string linha;
        getline(cin, linha);

        vector<Palavra> words;

        stringstream ss(linha);
        string word;

        int idx = 0;
        while(ss >> word) {
            words.push_back({word, idx});
            idx++;
        }

        sort(words.begin(), words.end(), [](Palavra a, Palavra b) {
            if(a.word.size() == b.word.size()) return a.pos < b.pos;
            return a.word.size() > b.word.size();
        });

        for(int i = 0; i < words.size(); i++) {
            cout << words[i].word;

            if(i == words.size() - 1) cout << endl;
            else cout << ' ';
        }
    }

    return 0;
}