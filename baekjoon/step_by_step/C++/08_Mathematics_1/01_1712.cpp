/**
 * https://www.acmicpc.net/problem/1712
 * 
 * BOJ 1712 - 손익분기점
 * 
 * 입력 : 자연수 A, B, C (A, B, C <= 2.1e9)
 * 출력 : 최초로 이익이 발생하는 판매량 P 혹은 이익이 발생하지 않음(-1)
 **/

#include <iostream>
using namespace std;

void solve() {
    int a, b, c, p;
    cin >> a >> b >> c;
    
    p = b < c ? (a / (c - b) + 1) : -1;
    cout << p;

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
