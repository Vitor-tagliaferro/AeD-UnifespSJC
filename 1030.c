#include <stdio.h>

int josephus(int n, int k) {
    int sobrevivente = 0;
    for (int i = 2; i <= n; i++) {
        sobrevivente = (sobrevivente + k) % i;
    }
    return sobrevivente + 1; 
}

int main() {
    int casos, n, k;

    scanf("%d", &casos);

    for (int i = 1; i <= casos; i++) {
        scanf("%d %d", &n, &k);

        int resultado = josephus(n, k);

        printf("Case %d: %d\n", i, resultado);
    }

    return 0;
}
