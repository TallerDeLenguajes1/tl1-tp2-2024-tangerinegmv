#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 7
int main()
{
    int i, j;
    float mt[N][M];
    float *pmt;
    pmt = mt;
    float *aux = pmt;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            *aux = 1 + rand() % 100;
            printf("%f ", *aux);
            aux++;
        }
        printf("\n");
        aux++;
    }
