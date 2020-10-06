/**
 * https://www.acmicpc.net/problem/10844
 * 
 * BOJ 10844 - 쉬운 계단 수
 * 
 * 입력 : 수의 길이 N (1 <= N <= 100)
 * 출력 : 길이가 N인 계단 수의 개수 (mod 1e9)
 **/

#include <iostream>
using namespace std;
const int MOD = 1e9;

void solve() {
    int n, memo[2][10] = {{0, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
    
    cin >> n;
    for (int i = 1; i < n; i++) {
        memo[i % 2][0] = memo[(i - 1) % 2][1];
        memo[i % 2][9] = memo[(i - 1) % 2][8];
        for (int j = 1; j <= 8; j++)
            memo[i % 2][j] = (memo[(i - 1) % 2][j - 1] + memo[(i - 1) % 2][j + 1]) % MOD;
    }
    
    int answer = 0;
    for (int i : memo[(n - 1) % 2])
        answer = (answer + i) % MOD;
    cout << answer;

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
