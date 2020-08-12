/**
 * https://www.acmicpc.net/problem/2292
 * 
 * BOJ 2292 - 벌집
 * 
 * 입력 : 도착할 방의 번호 N (1 <= N <= 1e9)
 * 출력 : 최단거리 Dist
 **/

#include <iostream>
using namespace std;

void solve() {
    int n, dist = 1;
    cin >> n;

    while (n > 1)
        n -= 6 * (dist++);
    cout << dist;

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
