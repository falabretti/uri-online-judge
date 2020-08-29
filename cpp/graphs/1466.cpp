#include <bits/stdc++.h>

using namespace std;

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node (int d) :
        data(d),
        left(NULL),
        right(NULL) { }
} Node;

Node* add(Node* root, int data) {

    if (root == NULL) 
        return new Node(data);

    if (data < root->data)
        root->left = add(root->left, data);
    else 
        root->right = add(root->right, data);
    
    return root;
}

void bfs(Node* root) {

    queue<Node*> q;
    q.push(root);

    bool first = true;

    while (!q.empty()) {
        Node* node = q.front();
        q.pop();

        if (first) first = false;
        else cout << " ";

        cout << node->data;

        if (node->left != NULL) q.push(node->left);
        if (node->right != NULL) q.push(node->right);
    }

    cout << '\n';
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c;
    cin >> c;

    for (int i = 1; i <= c; i++) {
        int n;
        cin >> n;

        Node* root = NULL;

        while (n--) {
            int v;
            cin >> v;

            root = add(root, v);
        }

        cout << "Case " << i << ":\n";
        bfs(root);
        cout << '\n';
    }

    return 0;
}
