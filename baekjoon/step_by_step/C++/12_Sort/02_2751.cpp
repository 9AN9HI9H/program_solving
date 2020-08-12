/**
 * https://www.acmicpc.net/problem/2751
 * 
 * BOJ 2751 - 수 정렬하기 2
 * 
 * 입력 : 수의 개수 N (1 <= N <= 1e6), N개의 정수 A[1..N] (|A[i]| <= 1e6, 중복 없음)
 * 출력 : 오름차순으로 정렬한 결과
 **/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    vi arr;

    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) cout << arr[i] << '\n';

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
