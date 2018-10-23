#include <stdio.h>
void main()
{
	float chinese[5] = {120, 110, 108, 112, 100};
	float math[5] = { 130, 120, 128, 125, 120}; 
	float english[5] = { 110, 105, 120, 122, 108 };
	float all[5] = { 280, 290, 278, 286, 276 };
	
	float sum[5], avg_stu[5], avg_class[4];
	
	int i;
	avg_class[0] = chinese[0] + chinese[1] + chinese[2] + chinese[3] + chinese[4];
	avg_class[1] = math[0] + math[1] + math[2] + math[3] + math[4];
	avg_class[2] = english[0] + english[1] + english[2] + english[3] + english[4];
	avg_class[3] = all[0] + all[1] + all[2] + all[3] + all[4];

	
	for(i = 0; i < 5; i++)
	{
		sum[i] = chinese[i] + math[i] + english[i] + all[i];
		avg_stu[i] = sum[i] / 4;
		if(i >= 4)
		{
			continue;
		}
		avg_class[i] /= 5;
	} 
	
	
	for(i = 0; i < 5; i++)
	{
		printf("学生%d总分为%.2lf\t平均成绩为%.2lf\n", i+1, sum[i], avg_stu[i] );
	}
	
	printf("\n语文平均成绩为%.2lf\n", avg_class[0]);
	printf("\n语文平均成绩为%.2lf\n", avg_class[1]);
	printf("\n语文平均成绩为%.2lf\n", avg_class[2]);
	printf("\n语文平均成绩为%.2lf\n", avg_class[3]);
 } 
