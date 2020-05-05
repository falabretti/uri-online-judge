#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<int> in;
        vector<int> out;

        queue<int> q;
        stack<int> s;
        priority_queue<int> pq;

        bool queue = true;
        bool stack = true;
        bool p_queue = true;

        while (n--) {
            int c;
            int x;
            cin >> c >> x;

            if (c == 1) {
                in.push_back(x);

                q.push(x);
                s.push(x);
                pq.push(x);
            } else {
                out.push_back(x);

                if (queue) {
                    if (q.front() != x) queue = false;
                    q.pop();
                }

                if (stack) {
                    if (s.top() != x) stack = false;
                    s.pop();
                }

                if (p_queue) {
                    if (pq.top() != x) p_queue = false;
                    pq.pop();
                }
            }
        }

        string str;

        if (queue and !stack and !p_queue) {
            str = "queue";
        } else if (stack and !queue and !p_queue) {
            str = "stack";
        } else if (p_queue and !queue and !stack) {
            str = "priority queue";
        } else if (queue or stack or p_queue) {
            str = "not sure";
        } else {
            str = "impossible";
        }

        cout << str << endl;
    }

    return 0;
}