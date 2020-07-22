/**
 * https://www.acmicpc.net/problem/1002
 * 
 * BOJ 1002 - 터렛
 * 
 * 입력 : 두 점의 좌표, 각 두 점으로부터 다른 한 점까지의 거리 (-10000 <= X, Y <= 10000, 0 <= R <= 10000)
 * 출력 : 다른 한 점이 있을 수 있는 위치의 수 혹은 무한대(-1)
 **/

#include <iostream>
using namespace std;

inline int square(int x) { return x * x; }
inline int dist(int x1, int y1, int x2, int y2) { return square(x2 - x1) + square(y2 - y1); }

void solve() {
    int x1, y1, r1, x2, y2, r2, d, answer;
    
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    d = dist(x1, y1, x2, y2);
    if (s < square(r1 - r2) || s > square(r1 + r2)) answer = 0;
    else if (s == 0 && r1 == r2) answer = -1;
    else if (s == square(r1 - r2) || s == square(r1 + r2)) answer = 1;
    else answer = 2;
    cout << answer << '\n';

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie();
    int tc; cin >> tc;
    while (tc--) solve();
    return 0;
}