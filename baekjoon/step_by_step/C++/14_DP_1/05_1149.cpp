/**
 * https://www.acmicpc.net/problem/1149
 * 
 * BOJ 1149 - RGB거리
 * 
 * 입력 : 집의 수 N (2 <= N <= 1000), 각 집을 빨강, 초록, 파랑으로 칠하는 비용 C (1 <= C <= 1000)
 * 출력 : 모든 집을 칠하는 비용의 최솟값
 **/

#include <iostream>
using namespace std;

void solve() {
    int n, r, g, b, memo[2][3];

    cin >> n >> r >> g >> b;
    memo[0][0] = r, memo[0][1] = g, memo[0][2] = b;
    for (int i = 0; i < n - 1; i++) {
        cin >> r >> g >> b;
        memo[(i + 1) % 2][0] = min(memo[i % 2][1], memo[i % 2][2]) + r;
        memo[(i + 1) % 2][1] = min(memo[i % 2][0], memo[i % 2][2]) + g;
        memo[(i + 1) % 2][2] = min(memo[i % 2][0], memo[i % 2][1]) + b;
    }
    cout << min(min(memo[(n - 1) % 2][0], memo[(n - 1) % 2][1]), memo[(n - 1) % 2][2]);

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
