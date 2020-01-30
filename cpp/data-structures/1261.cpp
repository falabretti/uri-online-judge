#include <bits/stdc++.h>

using namespace std;

int main() {

    int m, n;

    cin >> m >> n;
    map<string, int> dict;

    while(m--) {
        string desc;
        int value;

        cin >> desc >> value;
        dict.insert({desc, value});
    }

    cin.get();
    int points = 0;

    for(int i = 0; i < n; ) {
        string line;
        getline(cin, line);

        stringstream ss(line);
        string word;        

        while(ss >> word) {
            if(dict.find(word) != dict.end()) {
                points += dict.at(word);
            }
        }

        if(line == ".") {
            cout << points << endl;
            points = 0;
            i++;
        }
    }

    return 0;
}