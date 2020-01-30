#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int m, n;
        cin >> m >> n;

        map<string, string> dict;

        while(m--) {
            string japanese, portuguese;

            cin >> japanese;
            cin.get();
            getline(cin, portuguese);

            dict.insert(make_pair(japanese, portuguese));
        }

        while(n--) {
            string line;
            getline(cin, line);

            stringstream ss(line);
            string word;

            bool first = true;

            while(ss >> word) {
                if(first) first = false;
                else cout << ' ';

                if(dict.find(word) != dict.end()) cout << dict.at(word);                
                else cout << word;
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}