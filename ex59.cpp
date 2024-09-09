#include <iostream>

int main() {
    int valor;

    
    std::cout << "Digite um valor inteiro: ";
    std::cin >> valor;

    
    std::cout << "O valor " << valor << " é divisível por:\n";
    for (int i = 1; i <= valor; ++i) {
        if (valor % i == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
