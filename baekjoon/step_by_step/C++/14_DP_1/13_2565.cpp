/**
 * https://www.acmicpc.net/problem/2565
 * 
 * BOJ 2565 - 전깃줄
 * 
 * 입력 : 전깃줄의 개수 N (1 <= N <= 100), 각 전깃줄이 A전봇대와 B전봇대에 연결되는 위치의 번호 (A, B)[1..N] (1 <= A[i], B[i] <= 500)
 * 출력 : 남아있는 모든 전깃줄이 서로 교차하지 않게 하기 위해 없애야 하는 전깃줄의 최소 개수
 **/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using pii = pair<int, int>;
using vi = vector<int>;
using vpii = vector<pii>;

void solve() {
    int n;

    cin >> n;
    vi memo(n, 1);
    vpii arr(n);
    for (pii& i : arr) cin >> i.first >> i.second;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j] && memo[i] <= memo[j])
                memo[i] = memo[j] + 1;
    
    int answer = 0;
    for (int i : memo)
        if (answer < i) answer = i;
    cout << n - answer;
    
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
