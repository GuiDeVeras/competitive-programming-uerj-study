#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;
	cin >> n;
	
	vector<vector<int>> mat (n, vector<int> (n, 0));
	
	for (int i = 0; i < n; i++) {
		mat[0][i] = i;
		mat[i][0] = i;
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) mat[i][j] = i xor j;
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << mat[i][j] << " ";
		}
		cout << "\n";
	}
	
	
	return 0;

}
