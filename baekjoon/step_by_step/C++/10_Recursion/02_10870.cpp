/**
 * https://www.acmicpc.net/problem/10870
 * 
 * BOJ 10870 - 피보나치 수 5
 * 
 * 입력 : 정수 N (0 <= N <= 20)
 * 출력 : N번째 피보나치 수
 **/

#include <iostream>
using namespace std;

int fibo(int n) {
    if (n <= 1) return n;
    return fibo(n - 1) + fibo(n - 2);
}

void solve() {
    int n;

    cin >> n;
    cout << fibo(n);

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie();
    solve();
    return 0;
}