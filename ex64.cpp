#include <iostream>
#include <iomanip>  

int main() {
    int totalProdutos;

    
    std::cout << "Digite o total de produtos: ";
    std::cin >> totalProdutos;

    
    if (totalProdutos <= 0) {
        std::cerr << "O total de produtos deve ser um número positivo." << std::endl;
        return 1;
    }

    
    const double precoPorProduto = 1.99;

    
    std::cout << std::fixed << std::setprecision(2); 
    std::cout << "Quantidade - Valor R$\n";
    std::cout << "---------------------------------\n";

    
    for (int i = 1; i <= totalProdutos; ++i) {
        double valorTotal = i * precoPorProduto;
        std::cout << i << " -  R$ " << valorTotal << "\n";
    }

    return 0;
}
