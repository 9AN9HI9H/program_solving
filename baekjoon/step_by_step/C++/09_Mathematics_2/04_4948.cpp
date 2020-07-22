/**
 * https://www.acmicpc.net/problem/4948
 * 
 * BOJ 4948 - 베르트랑 공준
 * 
 * 입력 : 탐색할 기준 N (1 <= N <= 123456)
 * 출력 : 범위 (N, 2 * N] 사이에 존재하는 소수의 개수 Count
 **/

#include <iostream>
#include <algorithm>
using namespace std;
const int MAX = 250000;

bool is_prime[MAX + 1];

void check_prime() {
    fill(is_prime, is_prime + MAX + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 4; i <= MAX; i += 2)
        is_prime[i] = false;
    for (int i = 3; i <= MAX / i; i += 2)
        if (is_prime[i])
            for (int j = i * i; j <= MAX; j += i * 2)
                is_prime[j] = false;

    return;
}

void solve(int n) {
    int count = 0;

    if (n == 1) count = 1;
    for (int i = n + (n % 2 ? 2 : 1); i <= 2 * n; i += 2)
        if (is_prime[i]) count++;
    cout << count << '\n';

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie();
    check_prime();
    int tc; cin >> tc;
    while (tc) {
        solve(tc);
        cin >> tc;
    }
    return 0;
}