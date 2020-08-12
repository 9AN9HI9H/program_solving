/**
 * https://www.acmicpc.net/problem/2580
 * 
 * BOJ 2580 - 스도쿠
 * 
 * 입력 : 게임 시작 전 스도쿠판
 * 출력 : 모든 빈 칸이 채워진 스도쿠 판
 **/

#include <iostream>
using namespace std;
const int MAX = 81;

bool fill_end = false;

void fill_board(int board[], int idx = 0) {
    while (idx < MAX && board[idx] != 0) ++idx;
    if (idx == MAX) { fill_end = true; return; }

    for (int i = 1; !fill_end && i <= 9; i++) {
        bool ok = true;

        for (int j = idx % 9; ok && j < MAX; j += 9)
            if (i == board[j]) ok = false;
        
        for (int j = (idx / 9) * 9; ok && j < (idx / 9) * 9 + 9; j++)
            if (i == board[j]) ok = false;
        
        int square = (idx / 27) * 27 + ((idx % 9) / 3) * 3;
        for (int j = square; ok && j < square + 27; j++) {
            if (i == board[j]) ok = false;
            if (j % 3 == 2) j += 6;
        }

        if (ok) {
            board[idx] = i;
            fill_board(board, idx + 1);
            if (!fill_end) board[idx] = 0;
        }
    }

    return;
}

void solve() {
    int board[MAX];

    for (int& i : board) cin >> i;
    fill_board(board);
    for (int i = 0; i < MAX; i++) {
        cout << board[i] << ' ';
        if (i % 9 == 8) cout << '\n';
    }

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
