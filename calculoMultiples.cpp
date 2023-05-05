// Calculamos cuantos múltiples de un número hay dentro de un rango de números

#include <iostream>

using namespace std;

int main() {
	int a, b, k; // Declaramos las tres variables que vamos a usar.
	cout << "Introduce un número mayor o igual a 0: ";
	cin >> a;
	cout << "Introduce otro número mayor o igual a 0: ";
	cin >> b;
	cout << "Introduce el número que quieres compara si es múltiple o no: ";
	cin >> k;
	
	if (a < 0 || b < 0 || k <= 0 || a > b) {
		cout << "Error en alguno de los datos. Introducelos de nuevo.";
		return 0;
	}
	else {
		cout << "Vas bien.";
		return 0;
	}
}