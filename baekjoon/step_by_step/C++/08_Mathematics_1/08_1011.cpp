/**
 * https://www.acmicpc.net/problem/1011
 * 
 * BOJ 1011 - Fly me to the Alpha Centauri
 * 
 * 입력 : 출발하는 지점의 번호 X, 도착하는 지점의 번호 Y (0 <= X < Y < 2^31)
 * 출력 : 이동하는 데 필요한 최소한의 장치 작동 횟수 
 **/

#include <iostream>
#include <cmath>
using namespace std;

void solve() {
    int x, y, temp, answer;
    double r;

    cin >> x >> y;
    r = sqrt(y - x);
    temp = (int)(r + 0.5);
    answer = 2 * temp + (r > temp ? 0 : -1);
    cout << answer << '\n';

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc; cin >> tc;
    while (tc--) solve();
    return 0;
}
