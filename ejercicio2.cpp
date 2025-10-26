/* segundo ejercicio y seguia inventando cosas pq me quedaba sin ideas
 * JAJA*/
#include <iostream>
using namespace std;

int main() {
	int x, y, sum;
	sum = x + y;

	cout << "ingresa el primer numero: " << "\n";
	cin >> x;

	cout << "ingresa el segundo numero: ";
	cin >> y;

	if (sum < 50) {
		cout << "el numero es muy pequeño para la suma";
	} else {

		cout << "el resultado de la suma es: " << "\n";
		cout << sum;
	}

	return 0;
}
