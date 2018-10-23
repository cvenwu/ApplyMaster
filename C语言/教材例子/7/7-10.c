#include <stdio.h>

#define MAX 15

void main()
{
	int m, mm, i, j, k, ni, nj;
	int magic[MAX][MAX] = {0};
	
	printf("Enter the number you wanted: ");
	scanf("%d", &m);
	
	if((m <= 0) || (m % 2 == 0))
	{
		printf("Error in input data.\n");
		return;
	}
	
	mm = m * m;
	i = 0;
	j = m / 2;
	for(k = 1; k <= mm; k++)
	{
		magic[i][j] = k;
		
		//求右上方方格的坐标
		if(i == 0)			//最上一行 
			ni = m - 1; 	//下一个位置在最下一行
		else
			ni = i - 1;
		
		if(j == m - 1)
			nj = 0;
		else
			nj = j + 1;
		
		//判断右上方方格是否已有数
		if(magic[ni][nj] == 0)		//右上方无值
		{
			i = ni;
			j = nj;
		}
		else
			i++;					//右上方方格已经填上数字 	
	}
	
	
	for(i = 0; i < m; i++)			//显示填充的结果
	{
		for(j = 0; j < m; j++)
			printf("%4d", magic[i][j]);
		printf("\n");
	} 
}
