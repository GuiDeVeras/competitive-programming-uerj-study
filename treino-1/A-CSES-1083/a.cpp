#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;

	vector<int> vec(n);
	
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
	}
	
	sort(vec.begin(), vec.end());
	
	
	for (int i = 0; i < n-1; i++) {
		if (vec[i] + 1 != vec[i+1]) {
			cout << vec[i] + 1 << "\n";
			return 0;
		}
	}
	
	cout << vec[n-1] + 1 << "\n";

	return 0;

}

