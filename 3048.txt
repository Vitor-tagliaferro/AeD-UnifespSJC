#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int altura_atual, altura_anterior, padroes = 1;
    scanf("%d", &altura_anterior);
    
    for (int i = 1; i < N; i++) {
        scanf("%d", &altura_atual);
        if ((altura_atual > altura_anterior && padroes % 2 == 1) ||
            (altura_atual < altura_anterior && padroes % 2 == 0)) {
            padroes++;
        }
        altura_anterior = altura_atual;
    }
    
    printf("%d\n", padroes);
    return 0;
}
