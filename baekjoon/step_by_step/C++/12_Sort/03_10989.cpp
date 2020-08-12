/**
 * https://www.acmicpc.net/problem/10989
 * 
 * BOJ 10989 - 수 정렬하기 3
 * 
 * 입력 : 수의 개수 N (1 <= N <= 1e7), N개의 정수 A[1..N] (1 <= A[i] <= 10,000)
 * 출력 : 오름차순으로 정렬한 결과
 **/

#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
const int MAX = 10001;

void solve() {
    int n, temp;
    vi arr(MAX, 0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr[temp]++;
    }
    for (int i = 1; i < MAX; i++) {
        while (arr[i]--)
            cout << i << '\n';
    }

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
