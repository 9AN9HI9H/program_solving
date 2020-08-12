/**
 * https://www.acmicpc.net/problem/15652
 * 
 * BOJ 15652 - N과 M (4)
 * 
 * 입력 : 자연수 N과 M (1 <= M <= N <= 8)
 * 출력 : 1부터 N까지 자연수 중에서 M개를 고른 비감소 수열 (사전 순)
 **/

#include <iostream>
using namespace std;
const int MAX = 8;

int result[MAX];

void combi_rep(int n, int m, int x = 1, int cnt = 0) {
    if (cnt < m) {
        for (int i = x; i <= n; i++) {
            result[cnt] = i;
            combi_rep(n, m, cnt + 1);
        }
        return;
    }

    for (int i = 0; i < m; i++)
        cout << result[i] << ' ';
    cout << '\n';

    return;
}

void solve() {
    int n, m;
    cin >> n >> m;
    combi_rep(n, m);
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
