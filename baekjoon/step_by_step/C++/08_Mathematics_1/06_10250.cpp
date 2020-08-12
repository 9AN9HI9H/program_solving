/**
 * https://www.acmicpc.net/problem/10250
 * 
 * BOJ 10250 - ACM 호텔 
 * 
 * 입력 : 호텔의 층 수 H, 각 층의 방 수 W, 손님의 순서 N (1 <= H, W <= 99, 1 <= N <= H * W)
 * 출력 : N번째 손님에게 배정될 방의 번호 Room
 **/

#include <iostream>
using namespace std;

void solve() {
    int h, w, n, room;

    cin >> h >> w >> n;
    room = ((n - 1) % h + 1) * 100 + ((n - 1) / h + 1);
    cout << room << '\n';

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc; cin >> tc;
    while (tc--) solve();
    return 0;
}
