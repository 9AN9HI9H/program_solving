/**
 * https://www.acmicpc.net/problem/1085
 * 
 * BOJ 1085 - 직사각형에서 탈출
 * 
 * 입력 : 현재 위치 (X, Y), 직사각형 우상단 꼭짓점의 좌표 (W, H) (W, H <= 1000, 1 <= X < W, 1 <= Y < H)
 * 출력 : 직사각형의 경계선까지 가는 최단거리 Dist
 **/

#include <iostream>
#define min(x, y) ((x) > (y) ? (y) : (x))
using namespace std;

void solve() {
    int x, y, w, h, dist;
    
    cin >> x >> y >> w >> h;
    dist = min(min(w - x, x), min(h - y, y));
    cout << dist;
    
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
