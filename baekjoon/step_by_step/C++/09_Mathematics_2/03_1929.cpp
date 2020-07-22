/**
 * https://www.acmicpc.net/problem/1929
 * 
 * BOJ 1929 - 소수 구하기
 * 
 * 입력 : 탐색할 범위 [M, N] (1 <= M, N <= 1000000)
 * 출력 : 한 줄에 하나씩, 증가하는 순서대로 소수를 출력
 **/

#include <iostream>
#include <algorithm>
using namespace std;
const int MAX = 1000000;

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

void solve() {
    int m, n;

    cin >> m >> n;
    if (m <= 2 && n >= 2) cout << 2 << '\n';
    for (int i = m + (m % 2 ? 0 : 1); i <= n; i += 2)
        if (is_prime[i])
            cout << i << '\n';

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie();
    check_prime();
    solve();
    return 0;
}