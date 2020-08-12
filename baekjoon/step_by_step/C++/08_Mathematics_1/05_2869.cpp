/**
 * https://www.acmicpc.net/problem/2869
 * 
 * BOJ 2869 - 달팽이는 올라가고 싶다
 * 
 * 입력 : 낮에 올라가는 높이 A, 밤에 미끄러지는 높이 B, 올라갈 나무 막대의 높이 V (1 <= B < A <= V <= 1e9)
 * 출력 : 달팽이가 나무 막대를 모두 올라가는데 걸리는 일 수 D
 **/

#include <iostream>
using namespace std;

void solve() {
    int a, b, v, d;

    cin >> a >> b >> v;
    d = (v - a) / (a - b) + ((v - a) % (a - b) ? 2 : 1);
    cout << d;
    
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
