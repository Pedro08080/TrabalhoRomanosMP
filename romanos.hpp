#include <stdio.h>
#include <string.h>

int valor_romano(char c);

int romanos_para_decimal(char const *num_romano) {
    int decimal = 0;
    int i;
    int length = strlen(num_romano);

    for (i = 0; i < length; i++) {
        int valor_atual = valor_romano(num_romano[i]);
        if (valor_atual == -1) {
            return -1;
        }
    
        if (i < length - 1) {
            int valor_proximo = valor_romano(num_romano[i+1]);
            if (valor_atual < valor_proximo) {
                decimal += valor_proximo - valor_atual;
                i++;
            } else {
                decimal += valor_atual;
            }
        } else {
            decimal += valor_atual;
        }
    }

    return decimal;
}

//função principal
int main() {
    char num_romano[20];
    scanf("%s", num_romano);
    
    int decimal = romanos_para_decimal(num_romano);
    if (decimal == -1) {
        printf("Número romano inválido.\n");
    } else {
        printf("%d\n", decimal);
    }
    return 0;
}

int valor_romano(char c) {
    switch(c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return -1;
    }
}