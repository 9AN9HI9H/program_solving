/**
 * https://www.acmicpc.net/problem/9663
 * 
 * BOJ 9663 - N-Queen
 * 
 * 입력 : 체스판의 크기 및 퀸의 개수 N (1 <= N < 15)
 * 출력 : 크기가 N × N인 체스판 위에 퀸 N개를 서로 공격할 수 없게 놓는 경우의 수
 **/

#include <iostream>
#define abs(x) ((x) > 0 ? (x) : -(x))
using namespace std;
const int MAX = 14;

int answer;
int pos[MAX];

void n_queen(int n, int q = 0) {
    if (n == q) { answer++; return; }

    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < q; j++) {
            int p = pos[j];
            if (i == p || abs(i - p) == abs(j - q))
                break;
        }
        if (j < q) continue;
        pos[q] = i;
        n_queen(n, q + 1);
    }
    
    return;
}

void solve() {
    int n;
    cin >> n;
    n_queen(n);
    cout << answer;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}