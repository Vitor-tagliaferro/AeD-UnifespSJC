// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h> //clock(), CLOCKS_PER_SEC e clock_t

// int const TAM = 1000000; //constante para tamanho do vetor

// int separa(int p, int r, int v[]){
//   int c, j, k, t;
//   c = v[r]; j = p;
//   for (k = p; k < r; k++)
//     if (v[k] <= c){
//       t = v[j], v[j] = v[k], v[k] = t;
//       j++;
//     }
//   v[r] = v[j], v[j] = c;
//   return j;
// }

// void quicksort(int p, int r, int v[]){
//   int j;
//   if (p < r){
//     j = separa(p, r, v);
//     quicksort (p, j-1, v);
//     quicksort (j+1, r, v);
//   }
// }

// int main(){
//     clock_t t; //variável para armazenar tempo
//     clock_t t2;
//     int vetor[TAM];

//     //semente de aleatoriedade
//     srand((unsigned)time(NULL));

//     //geração aleatório dos valores do vetor
//     for(int a = 0; a < TAM; a++)
//         vetor[a] = rand() % TAM;

//     quicksort(0, TAM, vetor);

//     t2 = clock();
//     separa(0, TAM, vetor);
//     t2 = clock() - t2;

//     //imprime o tempo na tela
//     printf("Tempo de execucao binaria: %lf ms\n",         ((double)t2)/((CLOCKS_PER_SEC/1000))); //conversão para double

//     return 0;
// }