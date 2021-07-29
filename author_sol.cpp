#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x, y;
		cin >> x >> y;
		if (__gcd(x, y) > 1) {
			// if they are both even, or they are both odd but they are divisible
			// to each other, then the number of operations will be 0
			cout << 0;
		} else if (__gcd(x + 1, y) > 1 || __gcd(x, y + 1) > 1) {
			// if exactly one of them is even, and the other is odd, then we simply need
			// to increment the odd number to make it even and it will follow the previous rule
			cout << 1;
		} else {
			// otherwise, it means they are both odd and they are not divisible to each other
			// so we need at least 2 operations to transform the two numbers from odd to even
			cout << 2;
		}
		cout << '\n';
	}
	return 0;
}
