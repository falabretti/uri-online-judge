#include <bits/stdc++.h>

using namespace std;

int find_root(const char* str, char target, int size) {

    for (int i = 0; i < size; i++) {
        if (str[i] == target) {
            return i;
        }
    }
    return -1;
}

void print_post_order(const char* pre_order, const char* in_order, int size) {

    int root = find_root(in_order, pre_order[0], size); 
  
    if (root != 0) {
        print_post_order(pre_order + 1, in_order, root); 
    }
  
    if (root != size - 1) {
        print_post_order(pre_order + root + 1, in_order + root + 1, size - root - 1);
    }

    cout << pre_order[0]; 
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string pre_oder;
    string in_order;

    while (cin >> pre_oder && cin >> in_order) {
        print_post_order(pre_oder.c_str(), in_order.c_str(), pre_oder.size());
        cout << endl;
    }
    
    return 0;
}
