#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	// observe that 2n <= k <= 5n
	// if k < 3n (since 2 must be minimized), author has 
	// to get 2 on some exams so the answer is 3n - k
	// however, if 3n <= k, then the author will pass all exams
	cout << (k < 3 * n ? 3 * n - k : 0) << '\n';
	return 0;
}
