/**
 * https://www.acmicpc.net/problem/2748
 * 
 * BOJ 2748 - 피보나치 수 2
 * 
 * 입력 : 자연수 N (N <= 90)
 * 출력 : N번째 피보나치 수
 **/

#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using vll = vector<ll>;

vll memo;

ll dp(int n) {
    if (memo[n] != -1) return memo[n];
    return (memo[n] = dp(n - 1) + dp(n - 2));
}

void solve() {
    int n;

    cin >> n;
    memo.resize(n + 1, -1);
    memo[0] = 0, memo[1] = 1;
    cout << dp(n);

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
