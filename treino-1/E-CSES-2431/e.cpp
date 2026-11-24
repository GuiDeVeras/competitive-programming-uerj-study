#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	vector<long long> num (16);
	long long p = 10;
	
	num[0] = 9;
	for (int i = 1; i < 16; i++) {
		num[i] = (9 * (i+1) * p) + num[i-1];
		p *= 10;
	}
	
	for (int i = 0; i < n; i++) {
		long long o; cin >> o;
		
		
		auto k = lower_bound(num.begin(), num.end(), o);
		
		int indice = k - num.begin();
		
		if (indice == 0) cout << o << "\n";
		else {
			o -= num[indice-1];
			long long l = 1;
			for (int q = 0; q < indice; q++) l *= 10;
			long long pos = o - 1, number = l + (pos / (indice+1)), posd = pos % (indice+1);
		
			string numbers = to_string(number);
			cout << numbers[posd] << "\n";
		}
		
	}
	
	return 0;

}
