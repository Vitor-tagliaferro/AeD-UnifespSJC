#include <stdio.h>

int main() {
    int cha, tipo, contador = 0;

    scanf("%d", &cha);

    for (int i = 0; i < 5; i++) {
        scanf("%d", &tipo);
        if (tipo == cha) {
            contador++;
        }
    }

    printf("%d\n", contador);

    return 0;
}
