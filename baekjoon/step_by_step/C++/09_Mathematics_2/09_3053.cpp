/**
 * https://www.acmicpc.net/problem/3053
 * 
 * BOJ 3053 - 택시 기하학
 * 
 * 입력 : 반지름 R (1 <= R <= 10000)
 * 출력 : 유클리드 기하학에서 반지름이 R인 원의 넓이, 택시 기하학에서 반지름이 R인 원의 넓이
 **/

#include <iostream>
using namespace std;
const double PI = 3.14159265358979;

void solve() {
    int r;
    
    cin >> r;
    cout << PI * (double)(r * r) << '\n' << (double)2.0 * r * r;

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie();
    solve();
    return 0;
}