#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "portuguese");
    int escolha;       // guarda a opção escolhida
    float valor;       // valor a ser convertido
    float resultado;   // resultado da conversão
    char unidade;      // unidade escolhida

    printf("=== Conversor Simples ===\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Fahrenheit para Celsius\n");
    printf("3 - Metros para Centímetros\n");
    printf("4 - Centímetros para Metros\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &valor);
        resultado = (valor * 9/5) + 32;
        printf("Resultado: %.2f °F\n", resultado);
    } else if (escolha == 2) {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &valor);
        resultado = (valor - 32) * 5/9;
        printf("Resultado: %.2f °C\n", resultado);
    } else if (escolha == 3 || escolha == 4) {
        printf("Digite o valor: ");
        scanf("%f", &valor);
        switch (escolha) {
            case 3:
                resultado = valor * 100;
                unidade = 'c'; // centímetros
                printf("Resultado: %.2f %c\n", resultado, unidade);
                break;
            case 4:
                resultado = valor / 100;
                unidade = 'm'; // metros
                printf("Resultado: %.2f %c\n", resultado, unidade);
                break;
        }
    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}
