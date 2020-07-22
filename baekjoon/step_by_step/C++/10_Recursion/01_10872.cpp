/**
 * https://www.acmicpc.net/problem/10872
 * 
 * BOJ 10872 - 팩토리얼
 * 
 * 입력 : 정수 N (0 <= N <= 12)
 * 출력 : N! (N 팩토리얼)
 **/

#include <iostream>
using namespace std;

int fact(int n) {
    if (n <= 1) return 1;
    return n * fact(n - 1);
}

void solve() {
    int n;

    cin >> n;
    cout << fact(n);

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie();
    solve();
    return 0;
}