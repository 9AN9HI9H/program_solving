/**
 * https://www.acmicpc.net/problem/1904
 * 
 * BOJ 1904 - 01타일
 * 
 * 입력 : 정수 N (0 <= N <= 1e6)
 * 출력 : 주어진 타일로 만들 수 있는 길이가 N인 모든 2진 수열의 개수를 15746으로 나눈 나머지
 **/

#include <iostream>
using namespace std;
const int MOD = 15746;
const int PERIOD = 47244;

void solve() {
    int n, memo[3] = {1, 1, 2};
    
    cin >> n;
    for (int i = 3; i <= n % PERIOD; i++)
        memo[i % 3] = (memo[(i - 1) % 3] + memo[(i - 2) % 3]) % MOD;
    cout << memo[n % 3];

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
