#include <stdio.h>

int main(){
    double n1, n2, n3, n4, nf, ne;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    nf = ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4) / 10;

        if(nf >= 7.0){
            printf("Media: %.1lf\n", nf);
            printf("Aluno aprovado.\n");
            return 0;
    }
        if(nf < 5.0){
            printf("Media: %.1lf\n", nf);
            printf("Aluno reprovado.\n");
            return 0;
    }
    printf("Media: %.1lf\n", nf);
    printf("Aluno em exame.\n");
    scanf("%lf", &ne);
    printf("Nota do exame: %.1lf\n", ne);

    nf = (nf + ne) / 2; 
    
        if(nf >= 5.0){
            printf("Aluno aprovado.\n");
    }
        else{
            printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1lf\n", nf);

return 0;
}
