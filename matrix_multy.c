#include <stdio.h>

int main()
{
    int m1[2][2] = {{2, 3}, {4, 3}};
    int m2[2][2] = {{7, 6}, {9, 8}};

    int matrix_multy[2][2] = {{m1[0][0] * m2[0][0] + m1[0][1] * m2[1][0],m1[0][0] * m2[0][1]+m1[0][1]*m2[1][1]}, {m1[1][0] * m2[0][0] + m1[1][1] * m2[1][0],m1[1][0] * m2[0][1] + m1[1][1] * m2[1][1]}};

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d ", matrix_multy[i][j]);
        }
        printf("\n");
    }
    return 0;
}