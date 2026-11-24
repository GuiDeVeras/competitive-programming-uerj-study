#include <bits/stdc++.h>
using namespace std;
long long cont = 0;
vector<vector<char>> board (8, vector<char> (8));
vector<int> c (8, 0), x (16, 0), y (16, 0);
void queen (int n, int qtt) {
	if (qtt == n) cont++;
	else {
		for (int i = 0; i < 8; i++) {
			if (board[qtt][i] != '*' && !(c[i] || x[i + qtt] || y[i-qtt+n-1])) {
				c[i] = x[i + qtt] = y[i-qtt+n-1] = 1;
				queen (n, qtt + 1);
				c[i] = x[i + qtt] = y[i-qtt+n-1] = 0;
			}
		}
	}
}

int main() {
	
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) cin >> board[i][j];
	}
	
	queen (8, 0);
	
	cout << cont << "\n";
	
	return 0;

}
