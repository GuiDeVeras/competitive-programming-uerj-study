#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> mat (9, vector<int> (9, -1));
vector<char> dir (48);
long long cont = 0;

void grid (int n, int x, int y) {
	mat[y][x] = 0;
	if (n == 48 && y == 7 && x == 1) {
		cont++;
		mat[y][x] = -1;
		return; 
	}
	else if (y == 7 && x == 1 || n == 48) {
		mat[y][x] = -1;
		return;
	}
	else if ((mat[y+1][x] == 0 && mat[y-1][x] == 0 && mat[y][x+1] != 0 && mat[y][x-1] != 0) || (mat[y+1][x] != 0 && mat[y-1][x] != 0 && mat[y][x+1] == 0 && mat[y][x-1] == 0)) {
		mat[y][x] = -1;
		return;
	}
	else {
		if (dir[n] == '?') {
			if (mat[y][x+1] != 0) {
				grid (n+1, x + 1, y);
			}
			if (mat[y+1][x] != 0) {
				grid (n+1, x, y + 1);
			}
			if (mat[y][x-1] != 0) {				
				grid (n+1, x - 1, y);
			}
			if (mat[y-1][x] != 0) {			
				grid (n+1, x, y - 1);
			}
		} else {
			if (dir[n] == 'D'  && mat[y+1][x] != 0) {
				grid (n+1, x, y + 1);
			} else if (dir[n] == 'R' && mat[y][x+1] != 0) {
				grid (n+1, x + 1, y);
			} else if (dir[n] == 'U' && mat[y-1][x] != 0) {
				grid (n+1, x, y - 1);
			} else if (dir[n] == 'L' && mat[y][x-1] != 0) {
				grid (n+1, x - 1, y);
			}
		}
		mat[y][x] = -1;
	}
}
int main() {

	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	
	for (int i = 0; i < 48; i++) cin >> dir[i];
	for (int i = 0; i < 9; i++) {
		mat[0][i] = 0;
		mat[i][0] = 0;
		mat[8][i] = 0;
		mat[i][8] = 0;
		
	}
	
	
	grid (0, 1, 1);
	
	cout << cont << "\n";
	
	return 0;

}
