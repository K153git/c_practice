//��һ�� m*n �����̵�ÿһ�񶼷���һ�����ÿ�����ﶼ��һ���ļ�ֵ����ֵ���� 0��������Դ����̵����Ͻǿ�ʼ�ø�����������ÿ�����һ��������ƶ�һ��ֱ���������̵����½ǡ�����һ�����̼������������ļ�ֵ��
�������������õ����ټ�ֵ������

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
            if(i==0&&j!=0)//�ڵ�һ��
            {
                grid[i][j]+=grid[i][j-1];
            }
            if(i!=0&&j==0)//�ڵ�һ��
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
