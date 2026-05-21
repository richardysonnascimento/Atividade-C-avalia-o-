#include <stdio.h>

int main() {
    float temperaturas[7];
    int i;

    int seguras = 0;
    int foraFaixa = 0;

    float soma = 0;
    float media;

    
    for(i = 0; i < 7; i++) {

        printf("Digite a temperatura %d: ", i + 1);
        scanf("%f", &temperaturas[i]);

        
        if(temperaturas[i] >= 18 && temperaturas[i] <= 26) {
            seguras++;
        } else {
            foraFaixa++;
        }

        
        soma += temperaturas[i];
    }

    
    media = soma / 7;

    
    printf("\nMedia das temperaturas: %.2f\n", media);
    printf("Temperaturas seguras: %d\n", seguras);
    printf("Temperaturas fora da faixa: %d\n", foraFaixa);

    return 0;
}
