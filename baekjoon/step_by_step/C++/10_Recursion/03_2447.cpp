/**
 * https://www.acmicpc.net/problem/2447
 * 
 * BOJ 2447 - 별 찍기 10
 * 
 * 입력 : 정수 N = 3^K (1 <= K <= 8)
 * 출력 : 첫번째 줄부터 N번째 줄까지 규칙에 맞게 별(*)을 출력
 **/

#include <iostream>
#include <vector>
#include <string>
using namespace std;
using vs = vector<string>;

void draw_blank(vs& board, int size, int pos) {
    for (int i = pos; i - pos < size; i++)
        board[i].insert(board[i].end(), size, ' ');
    return;
}

void draw_star(vs& board, int size, int pos = 0) {
    if (size == 1) board[pos] += '*';
    else {
        for (int i = 0; i < 9; i++) {
            if (i == 4) draw_blank(board, size / 3, pos + size / 3);
            else draw_star(board, size / 3, pos + (size / 3) * (i / 3));
        }
    }
    return;
}

void solve() {
    int n; cin >> n;
    vs board(n);
    draw_star(board, n);
    for (string& s : board)
        cout << s << '\n';
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
