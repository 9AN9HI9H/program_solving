/**
 * https://www.acmicpc.net/problem/2839
 * 
 * BOJ 2839 - 설탕 배달
 * 
 * 입력 : 배달할 설탕의 무게 N (3 <= N <= 5000)
 * 출력 : 가져갈 봉지의 개수 Count 혹은 가져갈 수 없음(-1)
 **/

#include <iostream>
using namespace std;

void solve() {
    int n, count = 0;
    cin >> n;

    while (n > 0 && n % 5) {
        n -= 3;
        ++count;
    }
    count = n < 0 ? -1 : (count + n / 5);
    cout << count;

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
