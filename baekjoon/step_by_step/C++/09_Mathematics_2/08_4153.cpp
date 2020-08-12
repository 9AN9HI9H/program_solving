/**
 * https://www.acmicpc.net/problem/4153
 * 
 * BOJ 4153 - 직각삼각형
 * 
 * 입력 : 삼각형의 세 변의 길이 A, B, C (1 <= A, B, C <= 30000)
 * 출력 : 직각삼각형인지 여부 (T/F)
 **/

#include <iostream>
#define swap(a, b) ((a)^=(b)^=(a)^=(b))
using namespace std;

void solve(int a, int b, int c) {
    if (a < b) swap(a, b);
    if (b < c) swap(b, c);
    cout << (a * a + b * b == c * c ? "right\n" : "wrong\n");
    
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c; cin >> a >> b >> c;
    while (a && b && c) {
        solve(a, b, c);
        cin >> a >> b >> c;
    }
    return 0;
}
