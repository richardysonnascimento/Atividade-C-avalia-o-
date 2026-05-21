#include <stdio.h>

int main() {
    float vendas[10];
    int vendaEspecial;
    int i;

    float totalVendido = 0;
    int destaque = 0;
    int comum = 0;

    
    for(i = 0; i < 10; i++) {
        printf("Digite o valor das vendas %d: ", i + 1); 
        scanf("%f", vendas[i]);
    
        printf("A venda foi especial? (1 = sim / 0 = nao): ");
        scanf("%d", &vendaEspecial);
    
        if(vendas[i] >= 100 || vendaEspecial == 1) {
            destaque++;
        } else {
            comum++;
        }
        
        totalVendido += vendas[i];
        }
    
    
    printf("Total vendido: %.2f\n", totalVendido);
    printf("Vendas destaque: %d\n", destaque);
    printf("Vendas comuns: %d\n", comum);
    

    return 0;
}
