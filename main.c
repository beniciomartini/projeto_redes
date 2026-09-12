#include <stdio.h>

int main() {
    int quantidade, protocolo, i;

    printf("Quantos pacotes deseja analisar? ");
    scanf("%d", &quantidade);

    for (i = 1; i <= quantidade; i++) {
        printf("\nPacote %d\n", i);
        printf("Protocolo: ");
        scanf("%d", &protocolo);

        if (protocolo == 1) {
            printf("TCP\n");
        }
        else if (protocolo == 2) {
            printf("UDP\n");
        }
        else if (protocolo == 3) {
            printf("ICMP\n");
        }
        else {
            printf("Protocolo desconhecido\n");
        }
    }

    return 0;
}
