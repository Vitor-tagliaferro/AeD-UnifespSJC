#include <stdio.h>
 
int main() {
    int s1, s2, n1, n2;
    double p1, p2, vp;
    
    scanf("%d %d %lf\n%d %d %lf", &s1, &n1, &p1, &s2, &n2, &p2);
    vp = (n1 * p1) + (n2 * p2);
    printf("VALOR A PAGAR: R$ %.2lf\n", vp);
 
    return 0;
}
