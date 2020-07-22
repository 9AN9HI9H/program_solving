/**
 * https://www.acmicpc.net/problem/11729
 * 
 * BOJ 11729 - 하노이 탑 이동 순서
 * 
 * 입력 : 첫 번째 장대에 쌓인 원판의 개수 N (0 <= N <= 20)
 * 출력 : 옮긴 횟수 K, 수행 과정 (S 번째 장대 가장 위에 있던 원판을 D 번째 장대로)
 **/

#include <iostream>
using namespace std;

void hanoi(int n, int s, int d) {
    if (n == 0) return;
    hanoi(n - 1, s, 6 - (s + d));
    cout << s << ' ' << d << '\n';
    hanoi(n - 1, 6 - (s + d), d);

    return;
}

void solve() {
    int n;

    cin >> n;
    cout << (1 << n) - 1 << '\n';
    hanoi(n, 1, 3);

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie();
    solve();
    return 0;
}