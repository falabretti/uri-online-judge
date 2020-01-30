#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    map<string, string> translations;

    while(n--) {
        string language, greeting;

        cin >> language;
        cin.get();
        getline(cin, greeting);

        translations.insert(make_pair(language, greeting));
    }

    int m;
    cin >> m;

    while(m--) {
        cin.get();

        string name, language;
        getline(cin, name);
        cin >> language;

        cout << name << endl;
        cout << translations.at(language) << endl;

        cout << endl;
    }

    return 0;
}