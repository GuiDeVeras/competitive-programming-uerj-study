#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		long long x, y;
		cin >> y >> x;
		
		if (y > x) {
			if (y % 2) cout << ((y * y) - (2 * (y - 1))) + x - 1 << "\n";
			else cout << (y * y) - x + 1 << "\n";
		} else {
			if (!(x % 2)) cout << ((x * x) - (2 * (x - 1))) + y - 1 << "\n";
			else cout << (x * x) - y + 1 << "\n";
		}
	}
	
	return 0;

}
