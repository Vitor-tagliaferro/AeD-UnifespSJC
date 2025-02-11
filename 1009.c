#include <stdio.h>

int main() {
    double salario, vendas, comissao;
    char nome[50];

    scanf("%s", nome);
    scanf("%lf\n%lf", &salario, &vendas);

    comissao = vendas * 0.15;
    salario+=comissao;
    printf("TOTAL = R$ %.2lf\n", salario);

    return 0;
}
