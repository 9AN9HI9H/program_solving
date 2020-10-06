/**
 * https://www.acmicpc.net/problem/11054
 * 
 * BOJ 11054 - 가장 긴 바이토닉 부분 수열
 * 
 * 입력 : 수열 A의 크기 N (1 <= N <= 1000), 수열 A[1..N] (1 <= A[i] <= 1000)
 * 출력 : 수열 A의 부분 수열 중에서 가장 긴 바이토닉 수열의 길이
 **/

#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;

void solve() {
    int n;

    cin >> n;
    vi arr(n), memo_i(n, 1), memo_d(n, 1);
    for (int& i : arr) cin >> i;
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j] && memo_i[i] <= memo_i[j])
                memo_i[i] = memo_i[j] + 1;

    for (int i = n - 1; i >= 0; i--)
        for (int j = n - 1; j >= i; j--)
            if (arr[i] > arr[j] && memo_d[i] <= memo_d[j])
                memo_d[i] = memo_d[j] + 1;
    
    int temp, answer = 0;
    for (int i = 0; i < n; i++) {
        temp = memo_i[i] + memo_d[i] - 1;
        if (answer < temp) answer = temp;
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
