#include <bits/stdc++.h>

using namespace std;

typedef struct Node {
    char data;
    struct Node* left;
    struct Node* right;
} Node;

Node* create_node(char data) {

    Node* new_node = (Node*) malloc(sizeof(Node));

    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
}

Node* build_sub_tree(string pre_order, int start, int end, int& pre_idx, unordered_map<char, int>& ref) {

    if (start > end)
        return NULL;

    int data = pre_order[pre_idx++];
    Node* node = create_node(data);

    int root_idx = ref[data];

    node->left = build_sub_tree(pre_order, start, root_idx - 1, pre_idx, ref);
    node->right = build_sub_tree(pre_order, root_idx + 1, end, pre_idx, ref);

    return node;
}

Node* build_tree(string pre_oder, string in_order) {

    int pre_idx = 0;
    unordered_map<char, int> in_idx_ref;

    for (int i = 0; i < in_order.size(); i++)
        in_idx_ref[in_order[i]] = i;

    return build_sub_tree(pre_oder, 0, in_order.size() - 1, pre_idx, in_idx_ref);
}

void print_post_order(Node* root) {

    if (root == NULL)
        return;

    print_post_order(root->left);
    print_post_order(root->right);
    cout << root->data;
}

int main() {

    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string pre_order;
    string in_order;

    while (cin >> pre_order and cin >> in_order) {

        Node* root = build_tree(pre_order, in_order);

        print_post_order(root);
        cout << endl;
    }

    return 0;
}
