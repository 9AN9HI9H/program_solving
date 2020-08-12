/**
 * https://www.acmicpc.net/problem/11651
 * 
 * BOJ 11651 - 좌표 정렬하기 2
 * 
 * 입력 : 점의 개수 N (1 <= N <= 1e5), 점 P[1..N]의 위치 x_i, y_i (|x_i|, |y_i| <= 1e5)
 * 출력 : 점을 정렬(y좌표, x좌표 순 오름차순)한 결과
 **/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using pii = pair<int, int>;
using vpii = vector<pii>;

void solve() {
    int n;
    vpii arr;

    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i].second >> arr[i].first;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
        cout << arr[i].second << ' ' << arr[i].first << '\n';

    return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}