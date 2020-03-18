#include <bits/stdc++.h>
using namespace std;

// void calc_lps(string p, int lps[]) {
//     int len = 0;
//     lps[0] = 0;

//     for (int i = 1; i < p.size();) {
//         if (p[i] == p[len]) {
//             len++;
//             lps[i] = len;
//             i++;
//         } else {
//             if (len != 0)
//                 len = lps[len - 1];
//             else {
//                 lps[i] = 0;
//                 i++;
//             }
//         }
//     }
// }

// bool kmp(string s, string p) {
//     int lps[p.size()];
//     calc_lps(p, lps);

//     for (int i = 0, j = 0; i < s.size();) {
//         if (s[i] == p[j]) {
//             i++;
//             j++;
//         }

//         if (j == p.size()) {
//             j = lps[j - 1];
//             return true;
//         } else if (i < s.size() and s[i] != p[j]) {
//             if (j != 0)
//                 j = lps[j - 1];
//             else
//                 i++;
//         }
//     }

//     return false;
// }

const int NOTES_SIZE = 12;

map<string, int> notes = {
    {"A", 0},  {"A#", 1},  {"Bb", 1},  {"B", 2}, {"Cb", 2}, {"B#", 3},
    {"C", 3},  {"C#", 4},  {"Db", 4},  {"D", 5}, {"D#", 6}, {"Eb", 6},
    {"E", 7},  {"Fb", 7},  {"E#", 8},  {"F", 8}, {"F#", 9}, {"Gb", 9},
    {"G", 10}, {"G#", 11}, {"Ab", 11},
};

void read_notes(int arr[], int n) {
    string prev_note;

    for (int i = 0; i < n; i++) {
        string note;
        cin >> note;

        if (i == 0)
            arr[i] = 0;
        else {
            int dist =
                // notes[note] - notes[prev_note];
                (notes[note] - notes[prev_note] + NOTES_SIZE) % NOTES_SIZE;
            // notes[note];
            arr[i] = dist;
        }

        // cout << arr[i] << ' ' << notes[note] << ' ' << prev_note << '|';

        prev_note = note;
    }
    // cout << endl;
}

void flatten_melody(int arr[], int n) {
    int base = arr[0];
    for (int i = 0; i < n; i++) {
        arr[i] = (arr[i] - base + NOTES_SIZE) % NOTES_SIZE;
    }
}

void arr_to_string(int arr[], int begin, int end, string& s) {
    ostringstream oss;
    for (int i = begin; i < end; i++) {
        oss << arr[i];
    }
    s = oss.str();
}

int main() {
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int m, t;

    while (cin >> m >> t and m and t) {
        int mm[m], mt[t];

        read_notes(mm, m);
        read_notes(mt, t);

        string ms, ts;
        arr_to_string(mm, 0, m, ms);

        if (mt[0] == mt[1])
            arr_to_string(mt, 0, t, ts);
        else
            arr_to_string(mt, 1, t, ts);

        // cout << ms << endl;

        // ostringstream m_oss;
        // for (int i : mm) {
        //     m_oss << i;
        // }
        // string ms(m_oss.str());

        // cout << ms << endl;

        // for (int i = 0; i < m; i++) cout << mm[i] << ' ';
        // cout << endl;

        // cout << ts << endl;

        // if (ms.find(ts) != string::npos)

        cout << (ms.find(ts) != -1 ? 'S' : 'N') << endl;

        // for (int i = 0; i < t; i++) cout << mt[i] << ' ';
        // cout << endl;

        // flatten_melody(mm, m);
        // flatten_melody(mt, t);

        // for (int i = 0; i < m; i++) cout << mm[i] << ' ';
        // cout << endl;

        // for (int i = 0; i < t; i++) cout << mt[i] << ' ';
        // cout << endl;
    }

    // int dist = (nota + notas.size() - prev_nota) % notas.size();

    // cout << 5 % 12 << endl;

    return 0;
}