#include<stdio.h>
int matrixSum(int M, int N, int a[][N])
{
    int i, j, sum = 0;
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++) sum += a[i][j];
    }
    return sum;
}
int main(void)
{
    int m, n, i, j;
    int matrix[100][100];
    scanf("%d%d", &m, &n);
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++) scanf("%d", &matrix[i][j]);
    }
    printf("%d\n", matrixSum(m, n, matrix));
    return 0;
}
