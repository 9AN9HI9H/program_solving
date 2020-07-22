/**
 * https://www.acmicpc.net/problem/1978
 * 
 * BOJ 1978 - 소수 찾기
 * 
 * 입력 : 수의 개수 N, N개의 원소로 이루어진 수열 A[1..N] (N <= 100, A[i] <= 1000)
 * 출력 : 원소들 중 소수의 개수 Count
 **/

#include <iostream>
#include <algorithm>
using namespace std;

bool is_prime[1001];

void check_prime() {
    fill(is_prime, is_prime + 1001, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 4; i <= 1000; i += 2)
        is_prime[i] = false;
    for (int i = 3; i <= 1000 / i; i += 2)
        if (is_prime[i])
            for (int j = i * i; j <= 1000; j += i * 2)
                is_prime[j] = false;

    return;
}

void solve() {
    int n, a, count = 0;

    cin >> n;
    while (n--) {
        cin >> a;
        if (is_prime[a]) count++;
    }
    cout << count;
    
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie();
    check_prime();
    solve();
    return 0;
}