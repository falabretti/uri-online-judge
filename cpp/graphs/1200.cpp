#include <bits/stdc++.h>

using namespace std;

typedef struct Node {
    char data;
    struct Node* left;
    struct Node* right;

    Node (char d) :
        data(d),
        left(NULL),
        right(NULL) { }
} Node;

Node* add(Node* root, char data) {

    if (root == NULL) 
        return new Node(data);

    if (data < root->data)
        root->left = add(root->left, data);
    else 
        root->right = add(root->right, data);
    
    return root;
}

Node* find_max(Node* root) {

    Node* cur = root;

    while (cur->right != NULL)
        cur = cur->right;

    return cur;
}

Node* remove(Node* root, char data) {

    if (root == NULL)
        return root;
    
    if (data < root->data) {
        root->left = remove(root->left, data);
    } else if (data > root->data) {
        root->right = remove(root->right, data);
    } else {

        if (root->left == NULL or root->right == NULL) {
            Node* new_root = root->left ? root->left : root->right;
            delete root;
            return new_root;
        }

        Node* temp = find_max(root->left);
        root->data = temp->data;
        remove(root->left, root->data);
    }

    return root;
}

Node* search(Node* root, char data) {
    
    if (root == NULL or root->data == data)
        return root;
    
    if (data < root->data) {
        return search(root->left, data);
    } else {
        return search(root->right, data);
    }
}

bool first = true;

void pre_order(Node* root) {

    if (root == NULL)
        return;

    if (first) first = false;
    else cout << " ";

    cout << root->data;;
    pre_order(root->left);
    pre_order(root->right);
}

void in_order(Node* root) {

    if (root == NULL)
        return;


    in_order(root->left);

    if (first) first = false;
    else cout << " ";
    cout << root->data;

    in_order(root->right);
}

void post_order(Node* root) {

    if (root == NULL)
        return;

    post_order(root->left);
    post_order(root->right);

    if (first) first = false;
    else cout << " ";
    cout << root->data;
}

typedef void (*print)(Node*);

map<string, print> output = {
    { "PREFIXA", pre_order },
    { "INFIXA", in_order },
    { "POSFIXA", post_order }
};

int main() {
    
    Node* root = NULL;

    string cmd;
    while(getline(cin, cmd)) {

        if (cmd.size() == 3) {
            char op = cmd[0];
            char value = cmd[2];

            if (op == 'I') {
                root = add(root, value);
            } else {
                Node* node = search(root, value);

                cout << value;
                cout << (node ? " existe\n" : " nao existe\n");
            }
        } else {
            first = true;
            output[cmd](root);
            cout << "\n";
        }
    }

    return 0;
}
