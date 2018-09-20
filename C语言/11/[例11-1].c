#include <stdio.h>


struct score  
{
	float grade[5];
	float avegrade, maxgrade, mingrade; 
};



void main()
{
	int i;
	struct score m;
	printf("input the grade of five courses:\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%f", &m.grade[i]);	
	}	
	
	m.avegrade = 0;
	m.maxgrade = m.grade[0];
	m.mingrade = m.grade[0];
	for (i = 0; i < 5; i++)
	{
		m.avegrade += m.grade[i];
		m.maxgrade = (m.grade[i] > m.maxgrade) ? m.grade[i] : m.maxgrade;
		m.mingrade = (m.grade[i] < m.mingrade) ? m.grade[i] : m.mingrade; 
	}
	
	m.avegrade /= 5;
	printf("avergrade = %5.1f maxgrade = %5.1f, mingrade = %5.1f\n", m.avegrade, m.maxgrade, m.mingrade);
	
}
