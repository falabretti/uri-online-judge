#include <bits/stdc++.h>

using namespace std;

struct Team {
    int id;
    int points;
    double p_scored;
    double p_received;
};

void initialize_teams(Team arr[], int n) {
    for(int i = 0; i < n; i++) {
        arr[i] = {i + 1, 0, 0, 0};
    }
}

int main() {

    int n;
    int instance = 1;

    while(cin >> n) {
        if(n == 0) break;

        if(instance > 1) cout << endl;

        Team conference[n];
        initialize_teams(conference, n);


        int games = n * (n - 1) / 2;

        while(games--) {
            int id1, id2, p1, p2;

            cin >> id1 >> p1 >> id2 >> p2;

            Team& t1 = conference[id1 - 1];
            Team& t2 = conference[id2 - 1];

            bool t1_winner = p1 > p2;
            t1.points += (t1_winner ? 2 : 1);
            t2.points += (t1_winner ? 1 : 2);

            t1.p_scored += p1;
            t1.p_received += p2;

            t2.p_scored += p2;
            t2.p_received += p1;
        }

        sort(conference, conference + n, [n](Team a, Team b) {

            if(a.points == b.points) {
                double avg_a = a.p_scored / (a.p_received == 0 ? n - 1 : a.p_received);
                double avg_b = b.p_scored / (b.p_received == 0 ? n - 1 : b.p_received);

                if(avg_a == avg_b) {
                    if(a.points == b.points) return a.id < b.id;
                    return a.points > b.points;
                }

                return avg_a > avg_b;
            }

            return a.points > b.points;
        });

        cout << "Instancia " << instance << endl;
        for(int i = 0; i < n; i++) {
            cout << conference[i].id;

            if(i == n - 1) cout << endl;
            else cout << ' ';
        }

        instance++;
    }

    return 0;
}
