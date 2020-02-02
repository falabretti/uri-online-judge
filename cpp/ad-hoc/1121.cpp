#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x;
    int y;
};

typedef struct Point Point;

const char UP = 'N';
const char DOWN = 'S';
const char RIGHT = 'L';
const char LEFT = 'O';
const char WALL = '#';
const char FIG = '*';
const char NORMAL = '.';
const char ROTATE_RIGHT = 'D';
const char ROTATE_LEFT = 'E';
const char FORWARD = 'F';

char directions[] = {UP, RIGHT, DOWN, LEFT};

map<char, Point> directions_moves{
    {UP, {-1, 0}}, {DOWN, {1, 0}}, {RIGHT, {0, 1}}, {LEFT, {0, -1}}};

int n, m;
char arena[105][105];

char get_new_direction(int cur_direction, char instruction) {
    int new_direction;

    if (instruction == ROTATE_RIGHT)
        new_direction = cur_direction + 1 == 4 ? 0 : cur_direction + 1;
    else if (instruction == ROTATE_LEFT)
        new_direction = cur_direction - 1 == -1 ? 3 : cur_direction - 1;

    return new_direction;
}

Point get_new_position(Point cur_pos, char direction) {
    Point new_pos = {
        cur_pos.x + directions_moves[direction].x,
        cur_pos.y + directions_moves[direction].y,
    };

    return new_pos;
}

Point verify_colision(Point cur_pos, Point new_pos) {
    if (arena[new_pos.x][new_pos.y] == WALL) {
        return cur_pos;
    }

    if (new_pos.x == -1 or new_pos.x == n or new_pos.y == -1 or
        new_pos.y == m) {
        return cur_pos;
    }

    return new_pos;
}

int main() {
    int s;

    while (cin >> n >> m >> s) {
        if (n == 0 and m == 0 and s == 0) break;

        int total = 0;
        int cur_direction;
        Point cur_pos;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arena[i][j];

                if (directions_moves.find(arena[i][j]) !=
                    directions_moves.end()) {
                    cur_pos = {i, j};

                    char* itr = find(directions, directions + 4, arena[i][j]);
                    cur_direction = distance(directions, itr);
                }
            }
        }

        char instructions[s];
        for (int i = 0; i < s; i++) cin >> instructions[i];

        for (char instruction : instructions) {
            if (instruction == ROTATE_LEFT or instruction == ROTATE_RIGHT) {
                cur_direction = get_new_direction(cur_direction, instruction);
            } else {
                Point new_pos =
                    get_new_position(cur_pos, directions[cur_direction]);

                cur_pos = verify_colision(cur_pos, new_pos);

                if (arena[cur_pos.x][cur_pos.y] == FIG) {
                    total++;
                    arena[cur_pos.x][cur_pos.y] = NORMAL;
                }
            }
        }

        cout << total << endl;
    }

    return 0;
}