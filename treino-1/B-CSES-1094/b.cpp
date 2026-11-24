#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	
	vector<int> vec(n);
	
	for (int i = 0; i < n; i++) cin >> vec[i];
	
	long long cont = 0;
	
	for (int i = 0; i < n - 1; i++) {
		if (vec[i] > vec[i+1]) {
			cont += (vec[i] - vec[i+1]);
			vec[i+1] = vec[i];
		}
	}

	cout << cont << "\n";

	return 0;

}

