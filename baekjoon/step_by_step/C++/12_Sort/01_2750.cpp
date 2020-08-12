/**
 * https://www.acmicpc.net/problem/2750
 * 
 * BOJ 2750 - 수 정렬하기
 * 
 * 입력 : 수의 개수 N (1 <= N <= 1000), N개의 정수 A[1..N] (|A[i]| <= 1000, 중복 없음)
 * 출력 : 오름차순으로 정렬한 결과
 **/

#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;

void my_sort(vi& arr, int n) {
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
    
    return;
}

void solve() {
    int n;
    vi arr;

    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    my_sort(arr, n);
    for (int i = 0; i < n; i++) cout << arr[i] << '\n';

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
