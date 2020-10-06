/**
 * https://www.acmicpc.net/problem/1932
 * 
 * BOJ 1932 - 정수 삼각형
 * 
 * 입력 : 삼각형의 크기 N (1 <= N <= 500), 정수 삼각형을 이루는 수 X (0 <= X <= 9999)
 * 출력 : 합이 최대가 되는 경로에 있는 수의 합
 **/

#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;

void solve() {
    int n;

    cin >> n;
    vvi memo(n + 1, vi(n + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> memo[i][j];
            memo[i][j] += max(memo[i - 1][j - 1], memo[i - 1][j]);
        }
    }

    int answer = 0;
    for (int i : memo[n])
        if (answer < i) answer = i;
    cout << answer;

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
