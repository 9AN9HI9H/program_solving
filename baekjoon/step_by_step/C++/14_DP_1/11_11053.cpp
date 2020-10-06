/**
 * https://www.acmicpc.net/problem/11053
 * 
 * BOJ 11053 - 가장 긴 증가하는 부분 수열
 * 
 * 입력 : 수열 A의 크기 N (1 <= N <= 1000), 수열 A[1..N] (1 <= A[i] <= 1000)
 * 출력 : 수열 A의 가장 긴 증가하는 부분 수열의 길이
 **/

#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;

void solve() {
    int n;

    cin >> n;
    vi arr(n), memo(n, 1);
    for (int& i : arr) cin >> i;
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j] && memo[i] <= memo[j])
                memo[i] = memo[j] + 1;
    
    int answer = 0;
    for (int i : memo)
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
