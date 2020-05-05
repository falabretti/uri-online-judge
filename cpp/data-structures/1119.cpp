#include <bits/stdc++.h>
using namespace std;

typedef struct node {
    int value;
    struct node *prev;
    struct node *next;
} Node;

typedef struct c_queue {
    Node *first;
    Node *last;
    int count;

    c_queue() {
        first = nullptr;
        count = 0;
    }

    void add(int value) {
        Node *new_node = (Node *)malloc(sizeof(Node));
        Node *last_copy = last;

        new_node->value = value;
        new_node->next = new_node;
        new_node->prev = new_node;

        if (empty()) {
            first = new_node;
            last = new_node;

            count++;
            return;
        }

        new_node->prev = last;
        new_node->next = first;

        new_node->prev->next = new_node;
        new_node->next->prev = new_node;

        last = new_node;

        count++;
    }

    Node *forward(Node *target, int idx) {
        Node *result = target;

        while (idx--) {
            result = result->next;
        }

        return result;
    }

    Node *backward(Node *target, int idx) {
        Node *result = target;

        while (idx--) {
            result = result->prev;
        }

        return result;
    }

    Node* remove(Node *target) {
        if (empty()) {
            throw runtime_error("Queue empty.");
        }

        Node *copy = target;
        target->prev->next = copy->next;
        target->next->prev = copy->prev;

        if (copy == first) {
            first = copy->next;
        }
        if (copy == last) {
            last = copy->prev;
        }

    	Node *ret = target->next;
        free(target);
        count--;

        return ret;
    }

    bool empty() { return size() == 0; }

    int size() { return count; }

    Node *get(int idx) {
        if (empty() or (idx < 0 or idx >= size())) {
            throw runtime_error("Index out of bounds.");
        }

        Node *target = first;
        while (idx--) {
            target = target->next;
        }

        return target;
    }
} C_queue;

int main() {
    int n, k, m;
    while (cin >> n >> k >> m and n and k and m) {
        C_queue q;
        for (int i = 1; i <= n; i++) q.add(i);

        Node *k_node = q.first;
        Node *m_node = q.last;

        while (!q.empty()) {
            k_node = q.forward(k_node, k - 1);
            m_node = q.backward(m_node, m - 1);

            if (k_node == m_node) {
                printf("%3d", k_node->value);

                k_node = m_node = q.remove(k_node);
            } else {
                printf("%3d%3d", k_node->value, m_node->value);

                k_node = q.remove(k_node);
                if (k_node == m_node) {
                    k_node = q.forward(k_node, 1);
                }

                m_node = q.remove(m_node);
            }
            m_node = q.backward(m_node, 1);

            printf(q.empty() ? "\n" : ",");
        }
    }

    return 0;
}