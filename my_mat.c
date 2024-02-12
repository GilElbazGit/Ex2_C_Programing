#include "stdio.h"

void build_mat(int *p)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

