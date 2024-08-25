#include<iostream>
using namespace std;


long long oblicz_silnie(int n) {
	long long s = 1;
	if (n < 0) {
		s = -1;
	}
	else if (n > 20) {
		s = -2;
	}
	else {
		for (int i = 2; i <= n; i++) {
			s = s * i;
		}
	}
	return s;
}

int main() {
	long long s;
	int n = 0;
	cout << "podaj dla jakiej liczby n chcesz obliczyc silnie: ";
	cin >> n;

	s = oblicz_silnie(n);
	if (s == -1) {
		cout << "wartosc silni jest ujemna!";
	}
	else if (s == -2) {
		cout << "wartosc silni jest za duza!";
	}
	else {
		cout << "\n" << n << "! = " << s;
	}
}