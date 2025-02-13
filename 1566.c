#include <string.h>
#include <stdio.h>

int main()
{
    int NC, N, altura, first, alturas[231];

    scanf("%d", &NC);

    for (int k = 0; k < NC; ++k)
    {
        memset(alturas, 0, sizeof(alturas));

        scanf("%d", &N);

        for (int i = 0; i < N; ++i)
        {
            scanf("%d", &altura);
            alturas[altura]++;
        }

        first = 1;
        for (int i = 20; i < 231; ++i)
        {
            for (int j = 0; j < alturas[i]; ++j)
            {
                if (first)
                    first = 0;
                else
                    printf(" ");
                printf("%d", i);
            }
        }
        printf("\n");
    }

    return 0;
}
