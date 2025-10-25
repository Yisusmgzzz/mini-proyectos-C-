#include <iostream>
#include <limits>

int main() {
	char sel;

	std::cout << "=== BIENVENIDO ===" << std::endl;
	std::cout << "¿quieres saber el valor maximo de los numeros enteros y decimales?" << std::endl;
	std::cout << "S/N: ";
	std::cin >> sel;

	if (sel == 'S' || sel == 's') {
		
		std::cout << "maximo valor de enteros: " << std::numeric_limits<int>::max() << std::endl;
		std::cout << "maximo valor de decimales: " << std::numeric_limits<float>::max() << std::endl;

		return 1;
	}else; if (sel == 'N' || sel == 'n') {

		std::cout << "oh, ok, no pasa nada ";
		return 1;
	}else{
		std::cout << "eso no me servira aqui... solo puedes escoger 2 opciones";
	}

	return 0;
}
