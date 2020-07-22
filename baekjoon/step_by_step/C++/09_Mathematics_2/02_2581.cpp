/**
 * https://www.acmicpc.net/problem/2581
 * 
 * BOJ 2581 - 소수
 * 
 * 입력 : 탐색할 범위 [M, N] (1 <= M, N <= 10000)
 * 출력 : 범위 안의 자연수 중 소수인 것의 합과 최솟값 혹은 소수가 존재하지 않음(-1)
 **/

#include <iostream>
#include <algorithm>
using namespace std;
const int MAX = 10000;

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
    int m, n, sum = 0, min = 0;
    
    cin >> m >> n;
    if (m <= 2 && n >= 2) sum = 2, min = 2;
    for (int i = m + (m % 2 ? 0 : 1); i <= n; i += 2) {
        if (is_prime[i]) {
            sum += i;
            if (min == 0) min = i;
        }
    }
    if (min) cout << sum << '\n' << min;
    else cout << -1;

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie();
    check_prime();
    solve();
    return 0;
}