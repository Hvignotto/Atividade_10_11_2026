#include <stdio.h>

int main() {
    int x;
    const char *dia;
    
    printf("Digite um numero para o dia da semana (1-7): ");
    scanf("%d", &x);
    
    switch (x) {
        case 1:
            dia = "Domingo";
            break;
        case 2:
            dia = "Segunda-feira";
            break;
        case 3:
            dia = "Terca-feira";
            break;
        case 4:
            dia = "Quarta-feira";
            break;
        case 5:
            dia = "Quinta-feira";
            break;
        case 6:
            dia = "Sexta-feira";
            break;
        case 7:
            dia = "Sabado";
            break;
        default:
            dia = "Valor invalido";
            break;
    
    }
    
    printf("Dia da semana: %s\n", dia);
    return 0;
}