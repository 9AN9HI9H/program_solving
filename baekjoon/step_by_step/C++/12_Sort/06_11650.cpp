/**
 * https://www.acmicpc.net/problem/11650
 * 
 * BOJ 11650 - 좌표 정렬하기
 * 
 * 입력 : 점의 개수 N (1 <= N <= 1e5), 점 P[1..N]의 위치 x_i, y_i (|x_i|, |y_i| <= 1e5)
 * 출력 : 점을 정렬(x좌표, y좌표 순 오름차순)한 결과
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
        cin >> arr[i].first >> arr[i].second;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
        cout << arr[i].first << ' ' << arr[i].second << '\n';

    return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}