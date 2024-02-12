#include <stdio.h>
#include "my_mat.h"

void build_mat(int mat[][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}
int shortestPath(int arr[][10],int start, int end){
    int temp[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if(arr[i][j] == 0){
                temp[i][j] = -1;
            }else{
                temp[i][j] = arr[i][j];
            }
        }

    }

    for (int k = 0; k < 10; k++)
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if(temp[i][k] != -1 && temp[k][j] != -1){
                    if((temp[i][j] > temp[i][k] + temp[k][j]) || temp[i][j] == -1){
                        temp[i][j] = temp[i][k] + temp[k][j];
                    }
                }

            }

        }

    }
    return temp[start][end];
}


