//在一个 m*n 的棋盘的每一格都放有一个礼物，每个礼物都有一定的价值（价值大于 0）。你可以从棋盘的左上角开始拿格子里的礼物，并每次向右或者向下移动一格、直到到达棋盘的右下角。给定一个棋盘及其上面的礼物的价值，
请计算你最多能拿到多少价值的礼物

int maxValue(int** grid, int gridSize, int* gridColSize){
int max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}    
    int i,j=0;
    for(i=0;i<gridSize;++i)
    {
        for(j=0;j<*gridColSize;++j)
        {
            if(i==0&&j==0)
            {
                continue;
            }
            if(i==0&&j!=0)//在第一行
            {
                grid[i][j]+=grid[i][j-1];
            }
            if(i!=0&&j==0)//在第一列
            {
                grid[i][j]+=grid[i-1][j];
            }
            if(i!=0&&j!=0)
            {
                grid[i][j]+=max(grid[i-1][j],grid[i][j-1]);
            }
        }
    }
    return grid[gridSize-1][*gridColSize-1];
}
