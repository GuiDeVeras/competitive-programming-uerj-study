#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<vector<int>> adj (1001, vector<int> (1001, -1));
queue<pair<int, int>> q;

int main() {

	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	adj[0][0] = 0;
	q.push(make_pair(0, 0));
	while (!q.empty()) {
		pair<int, int> s = q.front(); q.pop();
		if (s.second + 2 >= 0 && s.second + 2 < n && s.first + 1 >= 0 && s.first + 1 < n) {
			if (adj[s.first+1][s.second+2] == -1) {
				adj[s.first+1][s.second+2] = adj[s.first][s.second] + 1;
				q.push(make_pair(s.first+1, s.second+2));
			}
		
		}
		if (s.second + 2 >= 0 && s.second + 2 < n && s.first - 1 >= 0 && s.first - 1 < n) {
			if (adj[s.first-1][s.second+2] == -1) {
				adj[s.first-1][s.second+2] = adj[s.first][s.second] + 1;
				q.push(make_pair(s.first-1, s.second+2));
			}
		}
		if (s.second - 2 >= 0 && s.second - 2 < n && s.first + 1 >= 0 && s.first + 1 < n) {
			if (adj[s.first+1][s.second-2] == -1) {
				adj[s.first+1][s.second-2] = adj[s.first][s.second] + 1;
				q.push(make_pair(s.first+1, s.second-2));
			}
		}
		if (s.second - 2 >= 0 && s.second - 2 < n && s.first - 1 >= 0 && s.first - 1 < n) {
			if (adj[s.first-1][s.second-2] == -1) {
				adj[s.first-1][s.second-2] = adj[s.first][s.second] + 1;
				q.push(make_pair(s.first-1, s.second-2));
			}
		}
		if (s.second + 1 >= 0 && s.second + 1 < n && s.first - 2 >= 0 && s.first - 2 < n) {
			if (adj[s.first-2][s.second+1] == -1) {
				adj[s.first-2][s.second+1] = adj[s.first][s.second] + 1;
				q.push(make_pair(s.first-2, s.second+1));
			}
		}
		if (s.second - 1 >= 0 && s.second - 1 < n && s.first - 2 >= 0 && s.first - 2 < n) {
			if (adj[s.first-2][s.second-1] == -1) {
				adj[s.first-2][s.second-1] = adj[s.first][s.second] + 1;
				q.push(make_pair(s.first-2, s.second-1));
			}
		}
		if (s.second + 1 >= 0 && s.second + 1 < n && s.first + 2 >= 0 && s.first + 2 < n) {
			if (adj[s.first+2][s.second+1] == -1) {			
				adj[s.first+2][s.second+1] = adj[s.first][s.second] + 1;
				q.push(make_pair(s.first+2, s.second+1));
			}
		}
		if (s.second - 1 >= 0 && s.second - 1 < n && s.first + 2 >= 0 && s.first + 2 < n) {
			if (adj[s.first+2][s.second-1] == -1) {			
				adj[s.first+2][s.second-1] = adj[s.first][s.second] + 1;
				q.push(make_pair(s.first+2, s.second-1));
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) cout << adj[i][j] << " ";
		cout << "\n";
	}
	
	return 0;

}
