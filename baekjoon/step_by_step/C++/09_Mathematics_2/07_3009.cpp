/**
 * https://www.acmicpc.net/problem/3009
 * 
 * BOJ 3009 - 네 번째 점
 * 
 * 입력 : 세 점의 좌표 (1 <= X, Y <= 1000)
 * 출력 : 축에 평행한 직사각형을 만들기 위해서 필요한 네 번째 점의 좌표
 **/

#include <iostream>
#define two_of_them(a, b, c) ((a) == (b) ? (c) : ((b) == (c) ? (a) : (b)))
using namespace std;

void solve() {
    int a, b, c, d, e, f;
    
    cin >> a >> b >> c >> d >> e >> f;
    cout << two_of_them(a, c, e) << ' ' << two_of_them(b, d, f);
    
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
