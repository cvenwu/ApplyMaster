#include <stdio.h>

int main(int argc, char const *argv[])
{
    int score[5][5], i, j, temp;
    char name[5][30];

    for(i = 0; i <= 4; i++)
    {
        for(j = 0; j < 4; j++)
            scanf("%d", &score[i][j]);
        score[i][4] = score[i][0] + score[i][1] + score[i][2] + score[i][3]; 
    }

    for(i = 0; i <= 3; i++)
    {
        for(j = i; j <= 3; j++)
        {
            if(score[j][4] < score[j+1][4])
            {
                temp = score[j];
                
            }
        }
    }
        
    

    
    
    return 0;
}
