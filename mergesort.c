// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h> //clock(), CLOCKS_PER_SEC e clock_t

// int const TAM = 20000; // constante para tamanho do vetor

// void intercala(int p, int q, int r, int v[TAM]) {
//   int i, j, k, *w;
//   w = malloc((r - p) * sizeof(int));
//   i = p;
//   j = q;
//   k = 0;
//   while (i < q && j < r) {
//     if (v[i] <= v[j])
//       w[k++] = v[i++];
//     else
//       w[k++] = v[j++];
//   }
//   while (i < q)
//     w[k++] = v[i++];
//   while (j < r)
//     w[k++] = v[j++];
//   for (i = p; i < r; i++)
//     v[i] = w[i - p];
//   free(w);
// }
// void Mergesort(int p, int r, int v[TAM]) {
//   if (p < r - 1) {
//     int q = (p + r) / 2;
//     Mergesort(p, q, v);
//     Mergesort(q, r, v);
//     intercala(p, q, r, v);
//   }
// }

// int main() {
//   clock_t t; // variável para armazenar tempo
//   clock_t t2;
//   int vetor[TAM];

//   // semente de aleatoriedade
//   srand((unsigned)time(NULL));

//   // geração aleatório dos valores do vetor
//   for (int a = 0; a < TAM; a++)
//     vetor[a] = rand() % TAM;

//   Mergesort(0, TAM, vetor);

//   t2 = clock();
//   intercala(0, TAM/2, TAM ,vetor);
//   t2 = clock() - t2;

//   // imprime o tempo na tela
//   printf("Tempo de execucao binaria: %lf ms\n",
//          ((double)t2) / ((CLOCKS_PER_SEC / 1000))); // conversão para double

//   return 0;
// }