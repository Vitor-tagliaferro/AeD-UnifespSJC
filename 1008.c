#include <stdio.h>
 
int main() {
    int N, HT;
    double GH, Salario;
    
    scanf("%d\n%d\n%lf", &N, &HT, &GH);
    
    Salario=HT*GH;
    
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", N, Salario);
    
    
    return 0;
}
