#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n and n != 0) {
        queue<int> q;
        for (int i = 1; i <= n; i++) q.push(i);

        vector<int> discarted;
        discarted.reserve(n - 1);

        int count = 1;
        while (q.size() > 1) {
            if (count++ % 2 != 0)
                discarted.push_back(q.front());
            else
                q.push(q.front());

            q.pop();
        }

        cout << "Discarded cards:";
        for (int i = 0; i < discarted.size(); i++) {
            if (i > 0) cout << ",";
            cout << " " << discarted.at(i);
        }
        cout << endl;

        cout << "Remaining card: " << q.front() << endl;
    }

    return 0;
}