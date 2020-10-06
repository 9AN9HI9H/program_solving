/**
 * https://www.acmicpc.net/problem/14888
 * 
 * BOJ 14888 - 연산자 끼워넣기
 * 
 * 입력 : 수의 개수 N (2 <= N <= 11), 수열 A[1..N] (1 <= A[i] <= 100), 사칙연산의 개수 (가감승제 순)
 * 출력 : 만들 수 있는 식의 결과의 최댓값과 최솟값
 **/

#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
const int MAX = 1e9;

int n;
vi arr, oper(4);
int answer_M = -MAX, answer_m = MAX;

void func(int idx, int value) {
    if (idx == n) {
        if (answer_M < value) answer_M = value;
        if (answer_m > value) answer_m = value;
        return;
    }
    
    int y, x = arr[idx];
    for (int i = 0; i < 4; i++) {
        if (oper[i] > 0) {
            oper[i]--;
            if (i == 0) y = value + x;
            else if (i == 1) y = value - x;
            else if (i == 2) y = value * x;
            else y = value / x;
            func(idx + 1, y);
            oper[i]++;
        }
    }

    return;
}

void solve() {    
    cin >> n;
    arr.resize(n);
    for (int& i : arr) cin >> i;
    for (int& i : oper) cin >> i;

    func(1, arr[0]);
    cout << answer_M << '\n' << answer_m;

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
