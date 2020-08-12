/**
 * https://www.acmicpc.net/problem/1427
 * 
 * BOJ 1427 - 소트인사이드
 * 
 * 입력 : 정렬하고자 하는 수 N (1 <= N <= 1e9)
 * 출력 : 자리수를 내림차순으로 정렬한 수
 * 힌트 : 오름차순이 아니라 N = 0일 때 빼고 맨 앞에 0이 올 수 없음
 **/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void solve() {
    string N;
    cin >> N;
    sort(N.rbegin(), N.rend());
    cout << N;
    return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
