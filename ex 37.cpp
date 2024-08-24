#include <iostream>
#include <iomanip> // Para definir a precisão de casas decimais

using namespace std;

int main() {
   
    const double precoMorangoAte5kg = 32.50;
    const double precoMacaAte5kg = 13.80;
    const double precoMorangoAcima5kg = 30.20;
    const double precoMacaAcima5kg = 11.50;
    const double desconto = 0.10; 
    
    
    double kgMorango, kgMaca;
    
    // Entrada de dados
    cout << "Digite a quantidade de morango (em kg): ";
    cin >> kgMorango;
    cout << "Digite a quantidade de maca (em kg): ";
    cin >> kgMaca;
    
    
    double precoMorango;
    if (kgMorango <= 5) {
        precoMorango = kgMorango * precoMorangoAte5kg;
    } else {
        precoMorango = kgMorango * precoMorangoAcima5kg;
    }
    
    
    double precoMaca;
    if (kgMaca <= 5) {
        precoMaca = kgMaca * precoMacaAte5kg;
    } else {
        precoMaca = kgMaca * precoMacaAcima5kg;
    }
    
   
    double valorTotal = precoMorango + precoMaca;
    
   
    if (kgMorango + kgMaca > 8 || valorTotal > 200) {
        valorTotal -= valorTotal * desconto;
    }
    
    
    cout << fixed << setprecision(2); 
    cout << "Valor a ser pago: R$ " << valorTotal << endl;
    
    return 0;
}
