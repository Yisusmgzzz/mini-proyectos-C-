/* aqui quise darle uniformidad a mi codigo añadiendo
 * cosas como menus o vainas asi */
#include <iostream>
#include <limits>

int main() {
	char sel;

	std::cout << "=== BIENVENIDO ===" << std::endl;
	std::cout << "¿quieres saber el valor maximo de los numeros enteros y decimales?" << std::endl;
	std::cout << "S/N: ";
	std::cin >> sel;

	if (sel == 'S' || sel == 's') {
		
		std::cout << "maximo valor de enteros: " << std::numeric_limits<int>::max() << std::endl; //esa funcion segun te muestra el valor maximo o minimo del tipo de dato numerico que quieras
		std::cout << "maximo valor de decimales: " << std::numeric_limits<float>::max() << std::endl; //aqui puse de valor decimales pq aja despues se repetia jaja

		return 1;
	}else; if (sel == 'N' || sel == 'n') {

		std::cout << "oh, ok, no pasa nada ";
		return 1;
	}else{
		std::cout << "eso no me servira aqui... solo puedes escoger 2 opciones";
	}

	return 0;
}
