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

void pre_order(Node* root) {

    if (root == NULL)
        return;

    printf(" %d", root->data);
    pre_order(root->left);
    pre_order(root->right);
}

void in_order(Node* root) {

    if (root == NULL)
        return;

    in_order(root->left);
    printf(" %d", root->data);
    in_order(root->right);
}

void post_order(Node* root) {

    if (root == NULL)
        return;

    post_order(root->left);
    post_order(root->right);
    printf(" %d", root->data);
}

int main() {

    int t;
    cin >> t;

    for (int c = 1; c <= t; c++) {
        int n;
        cin >> n;

        Node* root = NULL;

        while (n--) {
            int v;
            cin >> v;

            root = add(root, v);
        }

        printf("Case %d:\n", c);

        printf("Pre.:");
        pre_order(root);

        printf("\nIn..:");
        in_order(root);

        printf("\nPost:");
        post_order(root);

        printf("\n\n");
    }

    return 0;
}
