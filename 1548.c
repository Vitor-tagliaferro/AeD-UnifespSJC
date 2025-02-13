#include <stdlib.h>
#include <stdio.h>

int comp(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

int main()
{
    int N, M, r;
    int original[1000], ordenado[1000];

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &M);

        for (int i = 0; i < M; ++i)
        {
            scanf("%d", &original[i]);
            ordenado[i] = original[i];
        }

        qsort(ordenado, M, sizeof(int), comp);

        r = 0;
        for (int i = 0; i < M; i++)
        {
            if (original[i] == ordenado[i])
                ++r;
        }

        printf("%d\n", r);
    }

    return 0;
}
