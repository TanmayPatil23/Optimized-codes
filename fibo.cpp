#include <iostream>
using namespace std;

long long fibo(int n) {
	long long res = 0;
	long long arr[n];
	arr[0] = 0;
	arr[1] = 1;
	for(int i = 2; i < n; i++) {
		arr[i] = arr[i - 1] + arr[i -2];
	}
	return arr[n - 1];
}

int main() {
	int n;
	cin >> n;
	cout << fibo(n+1) << "\n";
	return 0;
}

