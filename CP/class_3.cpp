#include <stdbool.h>
#include <stdio.h>

int n = 4;
int grid[15][15];

void ini()
{
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            grid[i][j] = 0;
        }
    }
}

void print()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (grid[i][j] == 1)
                printf("%n ", j + 1);
    }
}

bool isSafe(int i, int j)
{
    for (int k = 0; k < n; k++)
    {
        if (grid[i][k])
            return false;
    }
    int k = i, l = j;

    for (k = i, l = j; k >= 0 && l >= 0; k--, l--)
        if (grid[k][l])
            return false;

    for (k = i, l = j; l >= 0 && k < n; k++, l--)
        if (grid[k][l])
            return false;

    return true;
}

bool solve(int num, int i)
{
    if (i >= n) {
    print();
		return true; 
  }
  
	for (int k = 0; k < n; k++) { 
	
		if (isSafe( k, i)) { 
			board[k][i] = 1; 
		if (solveNQUtil(i + 1)) 
				return true; 

			board[k][i] = 0;  
		} 
	} 
	return false;
}

int main()
{
    scanf("%d", &n);
    solve(0, 0);
    return 0;
}
