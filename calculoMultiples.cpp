// Calculamos cuantos múltiples de un número hay dentro de un rango de números

#include <iostream>

using namespace std;

int main() {
	int a, b, k, r; // Declaramos las tres variables que vamos a usar.
	cout << "Introduce el limite inferior del rango de valores (mayor o igual que 0): ";
	cin >> a;
	cout << "Introduce el limite superior del rango de valores (mayor o igual que 0): ";
	cin >> b;
	cout << "Introduce el numero del cual quieres saber cuantos multiplos hay: ";
	cin >> k;
	r = 0;
	if (a < 0 || b < 0 || k <= 0 || a > b) {
		cout << "Error en alguno de los datos. Introducelos de nuevo.";
		return 0;
	}
	else {
		for (int i = a; i <= b; i++) {
			if (i % k == 0) {
				r++;
			}
		}
		cout << "Hay " << r << " multiplos de " << k << " entre " << a << " y " << b;
		return 0;
	}
}