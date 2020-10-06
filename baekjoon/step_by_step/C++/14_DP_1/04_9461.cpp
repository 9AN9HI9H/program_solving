/**
 * https://www.acmicpc.net/problem/9461
 * 
 * BOJ 9461 - 파도반 수열
 * 
 * 입력 : 자연수 N (N <= 100)
 * 출력 : 파도반 수열의 N번째 수
 **/

#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using vll = vector<ll>;

vll memo(101, -1);

ll dp(int n) {
    if (memo[n] != -1) return memo[n];
    return (memo[n] = dp(n - 1) + dp(n - 5));
}

void solve() {
    int n;

    cin >> n;
    cout << memo[n] << '\n';

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    memo[0] = 0;
    memo[1] = memo[2] = memo[3] = 1;
    memo[4] = 2;
    dp(100);

    int tc; cin >> tc;
    while (tc--) solve();
    
    return 0;
}
