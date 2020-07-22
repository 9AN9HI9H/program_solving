/**
 * https://www.acmicpc.net/problem/1193
 * 
 * BOJ 1193 - 분수찾기
 * 
 * 입력 : 구해야 하는 분수의 번호 X (1 <= 1e7)
 * 출력 : X번째 분수 (M/N 꼴)
 **/

#include <iostream>
using namespace std;

void solve() {
    int x, k, m, n;
    cin >> x;

    for (k = 1; x > k * (k + 1) / 2; k++) ;
    x -= k * (k - 1) / 2;
    m = k % 2 ? (k + 1) - x : x;
    n = (k + 1) - m;
    cout << m << '/' << n;
    
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie();
    solve();
    return 0;
}