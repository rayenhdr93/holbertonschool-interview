#include "sandpiles.h"
/**
 * print_grid - Print 3x3 grid
 * @grid: 3x3 grid
 *
 */
static void print_grid(int grid[3][3])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (j)
                printf(" ");
            printf("%d", grid[i][j]);
        }
        printf("\n");
    }
}
/**
 * print_grid - Print 3x3 grid
 * @grid: 3x3 grid
 *
 */
static int not_stable(int grid[3][3])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (grid[i][j] > 3)
            return(1);
        }
        
    }
    return (0);
}
/**
 * @brief 
 * 
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3]){
    int i, j, x, y;
    int list[] = {1, 1, 0, 0, 0, 2, 2, 0, 2, 2, 0, 1, 1, 0, 1, 2, 2, 1};
    int lis[] = {1, 1, 0, 1, 1, 0, 1, 2, 2, 1, 0, 0, 0, 2, 2, 0, 2, 2};
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            grid1[i][j] = grid1[i][j] + grid2[i][j];
        }
    for (y = 0; not_stable(grid1); y++){
    printf("=\n");
    print_grid(grid1);
    for (x = 0; x < 17; x = x + 2)
        {
            if (y % 2 == 0){
            i = lis[x];
            j = lis[x + 1];
            }
            else{
            i = list[x];
            j = list[x + 1]; 
            }
            if (grid1[i][j] > 3)
            {
                grid1[i][j] = grid1[i][j] - 4;
                if (j < 2) 
                grid1[i][j + 1] = grid1[i][j + 1] + 1;
                if (j > 0) 
                grid1[i][j - 1] = grid1[i][j - 1] + 1;
                if (i < 2) 
                grid1[i + 1][j] = grid1[i + 1][j] + 1;
                if (i > 0) 
                grid1[i - 1][j] = grid1[i - 1][j] + 1;
            } 
        }
    }
}
