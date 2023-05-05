// Pass by reference
#include <iostream>

using namespace std;

void test(int* v, int len);

int main() {
	int v[2] = { 1, 2 };
	test(v, sizeof(v) / sizeof(v[0]));
	return 0;
}

void test(int* v, int len) {
	for (int i = 0; i < len; i++) {
		cout << v[i] << endl;
	}
}