/**
 * https://www.acmicpc.net/problem/9020
 * 
 * BOJ 9020 - 골드바흐의 추측
 * 
 * 입력 : 2보다 큰 짝수 N (4 <= N <= 10000)
 * 출력 : N의 골드바흐 파티션(두 소수의 합) 중 두 소수의 차이가 가장 작은 것 (작은 소수를 먼저 출력, 공백으로 구분)
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
    int n;

    cin >> n;
    if (n == 4) cout << "2 2\n";
    for (int i = n / 2 - ((n / 2) % 2 ? 0 : 1); i > 2; i -= 2) {
        if (is_prime[i] && is_prime[n - i]) {
            cout << i << ' ' << n - i << '\n';
            break;
        }
    }

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    check_prime();
    int tc; cin >> tc;
    while (tc--) solve();
    return 0;
}
