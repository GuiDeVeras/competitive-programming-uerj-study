#include <bits/stdc++.h>
using namespace std;

long long menor = 1e9;
vector<long long> vec(100);

void somas(int x, int n, long long soma, long long media) {
	if (x == n - 1) {
		menor = min (menor, abs(abs(media - soma) - soma));
	}
	else {
		x++;
		soma += vec[x];
		somas(x, n, soma, media);
		soma -= vec[x];
		somas(x, n, soma, media);
	}
}


int main() {

	int n;
	cin >> n;

	long long sum = 0;
	
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
		sum += vec[i];
	}
	
	somas (0, n, 0, sum);
	
	cout << menor << "\n";
	
	
	return 0;

}
