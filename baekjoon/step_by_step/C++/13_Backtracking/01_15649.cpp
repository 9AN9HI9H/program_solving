/**
 * https://www.acmicpc.net/problem/15649
 * 
 * BOJ 15649 - N과 M (1)
 * 
 * 입력 : 자연수 N과 M (1 <= M <= N <= 8)
 * 출력 : 1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열 (사전 순)
 **/

#include <iostream>
using namespace std;
const int MAX = 8;

int result[MAX];
bool used[MAX];

void perm(int n, int m, int cnt = 0) {
    if (cnt == m) {
        for (int i = 0; i < m; i++)
            cout << result[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            used[i] = true;
            result[cnt++] = i + 1;
            perm(n, m, cnt--);
            used[i] = false;
        }
    }

    return;
}

void solve() {
    int n, m;
    cin >> n >> m;
    perm(n, m);
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
