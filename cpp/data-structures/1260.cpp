#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    cin.get();
    cin.get();
    
    cout << fixed << setprecision(4);

    bool first = true;

    while(n--) {
        if(first) first = false;
        else cout << endl;

        double total = 0;
        map<string, int> trees;

        string species;
        while(getline(cin, species)) {
            if(species.size() == 0) break;

            if(trees.find(species) != trees.end()) trees[species] += 1;
            else trees.insert(make_pair(species, 1));           

            total++;
        }

        for(auto itr : trees) {
            cout << itr.first << ' ' << (itr.second / total) * 100 << endl;
        }
    }

    return 0;
}