/**
 * https://www.acmicpc.net/problem/2579
 * 
 * BOJ 2579 - 계단 오르기
 * 
 * 입력 : 계단의 개수 N (1 <= N <= 300), 각 계단에 쓰여 있는 점수 S[1..N] (1 <= S[i] <= 10000)
 * 출력 : 계단 오르기 게임에서 얻을 수 있는 총 점수의 최댓값
 **/

#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;

vi score, memo;

// memo[i] : 계단 오르기 게임을 i번째 계단까지 했을 때 얻을 수 있는 총 점수의 최댓값
int dp(int idx) {
    if (idx < 0) return 0;

    int& ret = memo[idx];
    if (ret != -1) return ret;

    return ret = max(dp(idx - 2), dp(idx - 3) + score[idx - 1]) + score[idx];
}

void solve() {
    int n;

    cin >> n;
    score.resize(n);
    memo.resize(n, -1);

    for (int& i : score)
        cin >> i;
    cout << dp(n - 1);

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
