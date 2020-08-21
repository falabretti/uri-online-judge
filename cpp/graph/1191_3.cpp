#include <bits/stdc++.h>

using namespace std;

int pre_idx = 0;
unordered_map<char, int> in_ref;

void print_tree(string pre_order, int start, int end) {

    if (start > end)
        return;

    char letter = pre_order[pre_idx++];
    int root_idx = in_ref[letter];

    print_tree(pre_order, start, root_idx - 1);
    print_tree(pre_order, root_idx + 1, end);
    cout << letter;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string pre_order;
    string in_order;

    while (cin >> pre_order >> in_order) {

        pre_idx = 0;
        in_ref.clear();

        for (int i = 0; i < in_order.size(); i++)
            in_ref[in_order[i]] = i;

        print_tree(pre_order, 0, pre_order.size() - 1);
        cout << endl;
    }

    return 0;
}
