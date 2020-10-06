/**
 * https://www.acmicpc.net/problem/2156
 * 
 * BOJ 2156 - 포도주 마시기
 * 
 * 입력 : 포도주 잔의 개수 N (1 <= N <= 10000), 포도주 잔에 들어있는 포도주의 양 V[1..N] (0 <= V[i] <= 1000)
 * 출력 : 최대로 마실 수 있는 포도주의 양
 **/

#include <iostream>
using namespace std;

// memo[i] : 이번에 마시는 잔이 연속으로 i번째 마시는 경우일 때 마신 포도주의 양의 최댓값
int memo[3];

void solve() {
    int n, v, temp;

    cin >> n;
    while (n--) {
        cin >> v;
        temp = memo[0];
        memo[0] = max(max(memo[0], memo[1]), memo[2]);
        memo[2] = memo[1] + v;
        memo[1] = temp + v;
    }
    cout << max(max(memo[0], memo[1]), memo[2]);

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
