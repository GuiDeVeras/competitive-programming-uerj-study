#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;
	cin >> n;
	
	vector<int> vec(n);
	
	for (int i = 0; i < n; i++) cin >> vec[i];
	
	sort(vec.begin(),vec.end());
	
	long long med = vec[n/2], aux = 0;
	
	for (int i = 0; i < n; i++) aux += abs(vec[i] - med);
	
	cout << aux << "\n";
	
	return 0;

}
