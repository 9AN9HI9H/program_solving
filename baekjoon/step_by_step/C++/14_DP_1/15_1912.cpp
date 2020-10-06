/**
 * https://www.acmicpc.net/problem/1912
 * 
 * BOJ 1912 - 연속합
 * 
 * 입력 : 수열 A의 크기 N (1 <= N <= 1e5), 수열 A[1..N] (-1000 <= A[i] <= 1000)
 * 출력 : 연속된 부분 수열의 합 중 최댓값
 **/

#include <iostream>
using namespace std;

void solve() {
    int n, x, y, answer;

    cin >> n >> x;
    answer = x;
    for (int i = 1; i < n; i++) {
        cin >> y;
        y += (x > 0 ? x : 0);
        answer = max(answer, y);
        x = y;
    }
    cout << answer;
    
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
