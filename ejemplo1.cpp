//Pass by reference
#include <iostream>

using namespace std;

void squarePower(int& n); //Prototype with an int reference

int main() {
	int x = 0; // Declaration and initialitzation of x to 0.
	cout << "Insert integer value: " << endl;
	cin >> x;
	squarePower(x); // The call is equal to the pass by value call
	cout << "The square power of the given value is: " << x << endl;
	return 0;
}

void squarePower(int& n) {
	n = n * n; // The function does not return any values, but modifies
	// the original argument (n)
}
