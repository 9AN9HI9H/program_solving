/**
 * https://www.acmicpc.net/problem/1463
 * 
 * BOJ 1463 - 1로 만들기
 * 
 * 입력 : 정수 N (1 <= N <= 1e6)
 * 출력 : 연산 횟수의 최솟값
 **/

#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;

vi memo;

int dp(int n) {
    if (n <= 1) return 0;

    int& ret = memo[n];
    if (ret != -1) return ret;

    return ret = min(dp(n / 3) + n % 3, dp(n / 2) + n % 2) + 1;
}

void solve() {
    int n;

    cin >> n;
    memo.resize(n + 1, -1);
    cout << dp(n);

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
