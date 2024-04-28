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