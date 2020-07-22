/**
 * https://www.acmicpc.net/problem/2775
 * 
 * BOJ 2775 - 부녀회장이 될테야
 * 
 * 입력 : 테스트 케이스의 수 TC, 조사할 층 수 K, 조사할 방 번호 N (1 <= K, N <= 14)
 * 출력 : 해당 방에 살고 있는 인원
 **/

#include <iostream>
using namespace std;

int apartment[15][15];

void fill_apartment() {
    for (int i = 1; i <= 14; i++)
        apartment[0][i] = i;
    for (int i = 1; i <= 14; i++)
        for (int j = 1; j <= 14; j++)
            apartment[i][j] = apartment[i - 1][j] + apartment[i][j - 1];

    return;
}

void solve() {
    int tc, k, n;

    cin >> tc;
    while (tc--) {
        cin >> k >> n;
        cout << apartment[k][n] << '\n';
    }

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie();
    fill_apartment();
    solve();
    return 0;
}