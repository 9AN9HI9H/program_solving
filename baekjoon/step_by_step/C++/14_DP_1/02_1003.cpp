/**
 * https://www.acmicpc.net/problem/1003
 * 
 * BOJ 1003 - 피보나치 함수
 * 
 * 입력 : 정수 N (0 <= N <= 40)
 * 출력 : N번째 피보나치 수를 재귀적으로 구할 때 0이 호출되는 횟수와 1이 호출되는 횟수
 **/

#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;

vi memo(41, -1);

int dp(int n) {
    if (memo[n] != -1) return memo[n];
    return (memo[n] = dp(n - 1) + dp(n - 2));
}

void solve() {
    int n;

    cin >> n;
    if (n == 0) cout << "1 0\n";
    else cout << memo[n - 1] << ' ' << memo[n] << '\n';

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    memo[0] = 0, memo[1] = 1;
    dp(40);

    int tc; cin >> tc;
    while (tc--) solve();
    
    return 0;
}
